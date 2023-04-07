#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    # Write your code here
    mini=scores[0]
    maxi=scores[0]
    l=0
    h=0
    for i in range(1,len(scores)):
        if(scores[i] < mini):
            l+=1
            mini=scores[i]
        if(scores[i]>maxi):
            h+=1
            maxi=scores[i]
    return [h,l]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

