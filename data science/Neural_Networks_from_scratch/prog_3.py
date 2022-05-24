from winsound import SND_PURGE
import numpy as np

inputs = [1.1,4.8,6.7,-0.8]

weights = [[1,2,3,4],
            [3,6,8,9],
            [5,0,3,4]]

biases = [0.9,7.8,5.8]

output = np.dot(weights,inputs) + biases

print("OUTPUT:: ",output)


