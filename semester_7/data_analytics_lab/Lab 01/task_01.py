import numpy as np

arr =np.array([[1, 2, 3, 4],
                [5, 6, 7, 8]])

arr_2 = arr[:, np.newaxis]
arr_3 = arr_2[:, np.newaxis]

print(arr)
print(arr.shape)

print(arr_2)
print(arr_2.shape)

print(arr_3)
print(arr_3.shape)

arr_4 = arr_3.squeeze




