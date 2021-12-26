# from __future__ import absolute_import
# from __future__ import division
# from __future__ import print_function
import sys
print(sys.version)

from module import t_math

assert t_math.add(1, 1) == 2
assert t_math.subtract(1, 1) == 0
