
#Qm.n

total_bits = 18
num_int_bits = 2    #m
num_frac_bits = total_bits -   num_int_bits #n

low_range = -2**(num_int_bits-1)
high_range = 2**(num_int_bits-1) - 2**(-num_frac_bits)
resolution = 2**(-num_frac_bits)

print('range is [{}, {}]'.format(high_range, low_range))
print('resolution is {}'.format(resolution))
