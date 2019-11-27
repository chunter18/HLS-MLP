%% MLP design - Matlab
%Cole Hunter - 10/13/2019

%% load in the files he gave

%harder way
%data = load('ex4data1.mat');
%x_train = data.X;
%y_train = data.y;

%weights = load('ex4weights.mat');
%theta1 = weights.Theta1;
%theta2 = weights.Theta2;

%easier way
load('ex4weights.mat'); %loads Theta1 (25,401) and Theta2 (10,26)
load('ex4data1.mat');   %loads X (5000,400) and Y (5000,1)
%% try predict by itself - works just fine. done need anything else

[pred] = predict(Theta1, Theta2, X);

fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y)) * 100);

num_classification_errs = length(y) - sum(pred == y);
fprintf('number of classification errors = %d\n', num_classification_errs )

%% custom predict function

% Useful values
m = size(X, 1); %m = 5000
num_labels = size(Theta2, 1); %10

% You need to return the following variables correctly 
p = zeros(size(X, 1), 1); %5000x1 at end, not sure here

iprod1 = [ones(m, 1) X] * Theta1'; %5000x25

h1 = sigmoid(iprod1); %5000x25

iprod2 = [ones(m, 1) h1] * Theta2'; %5000x10

h2 = sigmoid(iprod2); %5000x10

[dummy, p] = max(h2, [], 2); %both dummy and p are 5000x1


%looking for 97.52, errors=124
fprintf('\nTraining Set Accuracy: %f\n', mean(double(p == y)) * 100);
num_classification_errs = length(y) - sum(p == y);
fprintf('number of classification errors = %d\n', num_classification_errs )

%% for min mix, ant we just find min and max vals of iprod1 and 2

max_iprod1 = max(iprod1);
max_layer1 = max(max_iprod1); %16.1246

min_iprod1 = min(iprod1);
min_layer1 = min(min_iprod1); %-15.0527

max_iprod2 = max(iprod2);
max_layer2 = max(max_iprod2); %7.8265

min_iprod2 = min(iprod2);
min_layer2 = min(min_iprod2); %-15.1672


%%

max_theta1 = max(Theta1);
max_wieghts1 = max(max_theta1); %1.0090

min_theta1 = min(Theta1);
min_wieghts1 = min(min_theta1); %-1.4634

max_theta2 = max(Theta2);
max_wieghts2 = max(max_theta2) %3.2116

min_theta2 = min(Theta2);
min_wieghts2 = min(min_theta2) %-4.0308

%%

max_input = max(X);
max_input1 = max(max_input) %1.1277

min_input = min(X);
min_input1 = min(min_input) %-0.1320

%%


%lets do 1 prod
input_vec = X(2, :);       %1x400 -> 400 cols
input_vec = [1 input_vec]; %add the bias

weights = Theta1(:, :); 
%weights = weights';

output = zeros(1, 25); %perfect size

reference = iprod1(2, :); %what we should get 


  
%we need third loop only if ifs a matrix matrix
%proudct, and this is matrix vector


%inputs
%weights - (m,n) - 25x401
%vec - (1,n) - 1x401

%output
% out - (1, 25)

%this produces correct ans. I was getting f'ed up by that bias term.
acc = 0;
for m = 1:25      
   for n = 1:401    
                            
                           
       
       if(n == 1)
           acc = 0;
       end
       
       temp = input_vec(n)*weights(m,n);
       acc = acc + temp;
       
       if(n == 401)
           output(m) = acc;
       end

   end
end

%thats a reference, lets make it into a function.
poo = [output; reference];


%% testing out new function
%comparison against the whole iprod1
%make sure its already been computed

weights = Theta1(:, :);         
%weights = weights';
single_output = zeros(1, 25);
whole_output = zeros(5000, 25);

for k = 1:5000
    input_vec = X(k, :);        %grab a single vector from the batch
    input_vec = [1 input_vec];  %add the bias.
    
    single_output = vec_mat_prod(input_vec, weights);
    ref = iprod1(k, :);
    
    %they are off by like 1e-12 - why?
    %result = isequal(single_output, ref);
    %if(result == 0)
    %    disp('mismatch');
    %    disp(k);
    %    poo = [single_output; ref];
    %    poo1 = single_output==ref;
    %    single_output-ref
    %    break;
    %end
    
    whole_output(k, :) = single_output;
end

result = isequal(whole_output, iprod1);

if(result==1)
    disp('arrays match, function works');
end

%% sigmoid apply

h1_cole = sigmoid(whole_output);

%% test for the second layer - same ops, dif sizes
%this will help me see dims for c code

weights = Theta2(:, :);
single_output = zeros(1, 10);
whole_output = zeros(5000, 10);

for k = 1:5000
    input_vec = h1_cole(k, :);        %grab a single vector from the batch
    input_vec = [1 input_vec];  %add the bias.
    
    single_output = vec_mat_prod(input_vec, weights);
    ref = iprod1(k, :);
    whole_output(k, :) = single_output;
    
end

result = isequal(whole_output, iprod1);

if(result==1)
    disp('arrays match, function works');
end

%%

h2_cole = sigmoid(whole_output);

%% prediction and accuracy test

[dummy, p] = max(h2_cole, [], 2);

%looking for 97.52, errors=124
%got it! well done.
fprintf('\nTraining Set Accuracy: %f\n', mean(double(p == y)) * 100);
num_classification_errs = length(y) - sum(p == y);
fprintf('number of classification errors = %d\n', num_classification_errs )

%now lets abstract it and see how much the sigmoid changes it.


%% test the whole system

[L1_output, activated_L1, L2_output, activated_L2, pred] = cole_predict(Theta1, Theta2, X);

%looking for 97.52, errors=124, got it (using regular sigmoid.)
%using approx sigmoid - get 97.3% acc, errors=135
%coming out of the hls the total accuracy will prob come down a few percent

fprintf('\nTraining Set Accuracy: %f\n', mean(double(pred == y)) * 100);
num_classification_errs = length(y) - sum(pred == y);
fprintf('number of classification errors = %d\n', num_classification_errs )

%% sigmoid func

%equation he gave was sig = 0.5 + x/4 + x^2/32

sig_in = iprod1(2, :);
ref = sigmoid(sig_in);
%confirmation
%ref == h1(2,:) %all 1s

out = zeros(1,25);
for k = 1:25
    val = sig_in(k);
    out(k) = 0.5 + val/4 + (val^2)/32;
end

a = ref-out %difference can be kindof significant, as much as 2.05 off
        %lot of swing thou, sometimes it 0.002
        
avg = mean(a)% 0.3824 is mean dif

%% actual sigmoid deriv like in class

X = [1, 0, 0; 1, 3, 9; 1, 6, 36];
Y = [0.5; sigmoid(3); sigmoid(6)];

betas = X \ Y;

%betas = 0.5, 0.2188, -0.0226
%        0.5  1/4     -


%just going to use x/4 and x/32

sig_in = iprod1(2, :);
ref = sigmoid(sig_in);
%confirmation
%ref == h1(2,:) %all 1s


out = zeros(1,25);
for k = 1:25
    val = sig_in(k);    %get single value to operate on
    abs_val = abs(val); %compute abs()
    
    if(abs_val > 4) %greater or greater equal?
        poly = 1
    else
        poly = 0.5 + abs_val/4 - (abs_val^2)/32;
    end
    
    if(val >= 0)
        out(k) = poly;
    else
        out(k) = 1 - poly;
    end
    
end

a = ref-out     %maximum dif (absolute) 0.02, min dif (absolute) is 0.0002 
        
avg = mean(a)   %avg dif is 0.0013, pretty dang close

%% sigmoid LUT - PWL
%https://pdfs.semanticscholar.org/b43a/ececf98ee12ab292a76f5e483e1ecd206fda.pdf


%% lets export the intermediate products we need

file_L1_out_no_activation = 'L1_out_no_activ.dat';
file_L1_out_activated = 'L1_out_activ.dat';

file_L2_out_no_activation = 'L2_out_no_activ.dat';
file_L2_out_activated = 'L2_out_activ.dat';



%%
%write out L1_ouput
fid = fopen(file_L1_out_no_activation, 'w');
if(fid < 0)
   disp('failed to open L1 file 1');
else
    disp('proceeding to write L1 file 1');
end

%set sizes appropriately
m = size(L1_output, 1);
n = size(L1_output, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', L1_output(r,c));
    end
end
fclose(fid);


%%
%write out L1_ouput_activated
fid = fopen(file_L1_out_activated, 'w');
if(fid < 0)
   disp('failed to open L1_a file 1');
else
    disp('proceeding to write L1_a file 1');
end

%set sizes appropriately
m = size(activated_L1, 1);
n = size(activated_L1, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', activated_L1(r,c));
    end
end
fclose(fid);

%%

%write out L2_ouput
fid = fopen(file_L2_out_no_activation, 'w');
if(fid < 0)
   disp('failed to open L2 file 1');
else
    disp('proceeding to write L2 file 1');
end

%set sizes appropriately
m = size(L2_output, 1);
n = size(L2_output, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', L2_output(r,c));
    end
end
fclose(fid);

%%

fid = fopen(file_L2_out_activated, 'w');
if(fid < 0)
   disp('failed to open L2_a file 1');
else
    disp('proceeding to write L2_a file 1');
end

%set sizes appropriately
m = size(activated_L2, 1);
n = size(activated_L2, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', activated_L2(r,c));
    end
end
fclose(fid);

%% also need the predictions to check.

%% and ill need to export the weights and data too?

file_theta1 = 'theta1.dat';
file_theta2 = 'theta2.dat';

fid = fopen(file_theta1, 'w');
if(fid < 0)
   disp('failed to open theta1 file');
else
    disp('proceeding to write theta1 file');
end

%set sizes appropriately
m = size(Theta1, 1);
n = size(Theta1, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', Theta1(r,c));
    end
end
fclose(fid);

fid = fopen(file_theta2, 'w');
if(fid < 0)
   disp('failed to open theta2 file');
else
    disp('proceeding to write theta2 file');
end

%set sizes appropriately
m = size(Theta2, 1);
n = size(Theta2, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', Theta2(r,c));
    end
end
fclose(fid);

%% data stuff

file_X = 'network_inputs_fullbatch.dat';
file_Y = 'network_outputs_fullbatch.dat';

fid = fopen(file_X, 'w');
if(fid < 0)
   disp('failed to open X file');
else
    disp('proceeding to write X file');
end

%set sizes appropriately
m = size(X, 1);
n = size(X, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', X(r,c));
    end
end
fclose(fid);

fid = fopen(file_Y, 'w');
if(fid < 0)
   disp('failed to open Y file');
else
    disp('proceeding to write Y file');
end

%set sizes appropriately
m = size(y, 1);
n = size(y, 2);
for r = 1:m
    for c = 1:n
        fprintf(fid, '%14.10f\n', y(r,c));
    end
end
fclose(fid);