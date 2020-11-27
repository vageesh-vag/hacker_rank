#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jimOrders function below.
def jimOrders(orders,n):
    c=[0]*n
    d=[0]*n
    for i in range(n):
        c[i]=orders[i][0]+orders[i][1]
    for i in range(n):
        d[i]=c.index(min(c))
        c[d[i]]=2000000
        d[i]=d[i]+1
    return d
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    orders = []
    for _ in range(n):
        orders.append(list(map(int, input().rstrip().split())))
    result = jimOrders(orders,n)
    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')
    fptr.close()
