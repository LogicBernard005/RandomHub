arr = [12, 3, 5, 7, 19]
N = len(arr)
K = 2

s = set(arr)

for itr in s:
    if K == 1:
        print(itr)  # itr is the Kth element in the set
        break
    K -= 1
