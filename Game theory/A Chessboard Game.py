import math
import os
import random
import re
import sys
def chessboardGame(x, y):
    return 'First' if x%4==0 or x%4==3 or y%4==0 or y%4==3 else 'Second'
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    t = int(input())
    for t_itr in range(t):
        xy = input().split()
        x = int(xy[0])
        y = int(xy[1])
        result = chessboardGame(x, y)
        fptr.write(result + '\n')
    fptr.close()
