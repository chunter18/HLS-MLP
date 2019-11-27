function [L1_outputs, activated_L1s, L2_outputs, activated_L2s, p] = cole_predict(Theta1, Theta2, X)
%COLE_PREDICT Predict the label of an input given a trained neural network
%   p = COLE_PREDICT(Theta1, Theta2, X) outputs the predicted label of X given the
%   trained weights of a neural network (Theta1, Theta2). Sigmoid is an
%   approximate version.

%im also gonna return all of the intermediate products becuase we need to save them 

    %there is no batching here, so we do it all one by one
    n_inputs = size(X,1);
    
    %these need to be transposed
    %so apparently these arent equivalent. need to check out why.
    %im actually not transposing it is why!
    
    weights_L1 = Theta1(:, :);
    %weights_L1 = Theta1';
    weights_L2 = Theta2(:, :);
    %weights_L2 = Theta2';
    
    output_batch = zeros(5000, 10);
    
    L1_outputs = zeros(5000, 25);
    activated_L1s = zeros(5000, 25);
    L2_outputs = zeros(5000, 10);
    activated_L2s = zeros(5000, 10);
    
    for k = 1:n_inputs
       
        L1_input_vec = X(k, :);        %grab a single vector from the batch
        L1_input_vec = [1 L1_input_vec];  %add the bias term
        
        L1_output = vec_mat_prod(L1_input_vec, weights_L1);
        activated_L1 = sigmoid_approx(L1_output);
        
        L2_input_vec = activated_L1;
        L2_input_vec = [1 L2_input_vec];
        
        L2_output = vec_mat_prod(L2_input_vec, weights_L2);
        activated_L2 = sigmoid_approx(L2_output);
        
        %in reality I would do argmax here and THEN add it to the batch
        %but since i know it wont matter ill reuse code.
        output_batch(k, :) = activated_L2;
        
        %save intermediate results for testing on HLS
        L1_outputs(k, :) = L1_output;
        activated_L1s(k, :) = activated_L1;
        L2_outputs(k, :) = L2_output;
        activated_L2s(k, :) = activated_L2;

    end
    
    [dummy, p] = max(output_batch, [], 2);

end