#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    # Write your code here
    mini=min(a)
    maxi=max(a)
    maxc=-1
    if(mini==maxi):
        return len(a)
    else:
        for i in range(mini,maxi):
            c=a.count(i)+a.count(i+1)
            if c>maxc:
                maxc=c
    return maxc

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()

