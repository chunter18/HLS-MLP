function [p] = predict(Theta1, Theta2, X)
%PREDICT Predict the label of an input given a trained neural network
%   p = PREDICT(Theta1, Theta2, X) outputs the predicted label of X given the
%   trained weights of a neural network (Theta1, Theta2)

% Useful values
m = size(X, 1);
num_labels = size(Theta2, 1);

% You need to return the following variables correctly 
p = zeros(size(X, 1), 1);

% original code

% h1 = sigmoid([ones(m, 1) X] * Theta1');
% h2 = sigmoid([ones(m, 1) h1] * Theta2');

% partition code into several steps in order to  provide visibility to
% intermediate results that will be used for verifying the C model

% generate sigmoid LUT

iprod1 = [ones(m, 1) X] * Theta1';

h1 = sigmoid(iprod1);

iprod2 = [ones(m, 1) h1] * Theta2';

h2 = sigmoid(iprod2);

[dummy, p] = max(h2, [], 2);

% =========================================================================


end
