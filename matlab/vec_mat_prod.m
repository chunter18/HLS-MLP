function [ret] = vec_mat_prod(vec, mat)
%VEC_MAT_PROD do a single vector matrix product on inputs
%   ret = VEC_MAT_PROD(vec, mat) outputs the prduct of the two input
%   operands.
%   (1, N)*(N, M) = (1,M)
%   ex: (1, 401)*(401, 25) = (1, 25)

    M = size(mat, 1);
    N = size(vec, 2);
    ret = zeros(1, M);
    acc = 0;
    
    for m = 1:M
        for n = 1:N
            
            if(n == 1)
                acc = 0;
            end
            
            temp = vec(n)*mat(m,n);
            acc = acc + temp;
            
            if(n == N)
                ret(m) = acc;
            end
            
        end
    end
    

end