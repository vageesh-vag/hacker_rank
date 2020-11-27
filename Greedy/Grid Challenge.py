if __name__ == '__main__':
    t = int(input())
    for t_itr in range(t):
        n = int(input())
        grid = []
        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)
        a=[]
        f=0
        for i in grid:
            a.append(sorted(i))
        for i in zip(*a):
            if list(i)==sorted(i):
                f=f+1
        if f==len(grid[0]):
            print('YES')
        else:
            print('NO')
