inputs = [1,2,3]

weights = [0.2,0.8,-0.5]

bias = 2

output = inputs[0]*weights[0] + inputs[1]*weights[1] + inputs[2]*weights[2] + bias

print('OUTPUT:: ',output)

#formula for output:: inputs * weights + bias
#for tuning we can change bias and weights but not inputs coz they are results of previous layer of neurons