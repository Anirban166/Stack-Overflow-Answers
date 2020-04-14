# link: https://stackoverflow.com/questions/59263172/numpy-how-to-merge-two-sorted-arrays-into-a-larger-sorted-array/59263257#59263257

import numpy as np
import sortednp as s

a = np.array([1,2,3,5])
b = np.array([2,4,6,7])

m = s.merge(a, b)
print(m)
