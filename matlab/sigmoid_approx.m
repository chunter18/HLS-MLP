function [ret] = sigmoid_approx(layer_out)
%SIGMOID_APPROX applies an approximation to sigmoid on its input
%   ret = SIGMOID_APPROX(layer_out) outputs the approximate sigmoid on
%   each elt in the input

    in_len = size(layer_out, 2); %row vector input
    ret = zeros(1, in_len);
    
    for k = 1:in_len
        val = layer_out(k);   
        abs_val = abs(val);     

        if(abs_val > 4) %greater or greater equal?
            poly = 1;
        else
            poly = 0.5 + abs_val/4 - (abs_val^2)/32;
        end

        if(val >= 0)
            ret(k) = poly;
        else
            ret(k) = 1 - poly;
        end 
    end
   
end