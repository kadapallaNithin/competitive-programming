from time import time

def fact(n):
    f = 1
    for i in range(1,n+1):
        f *= i
    return f

def compare(a,b):
    for i in range(len(a)):
        if a[i] != b[i]:
            return i

def swap(perm,i,j):
    t = perm[i]
    perm[i] = perm[j]
    perm[j] = t

def next_permutation(perm):
    n = len(perm)
    i = n-2
    while (i >= 0 and perm[i] > perm[i+1]):
        i -= 1
    j = i+1
    while(j<n and perm[i] < perm[j]):
        j+=1
    swap(perm,i,j-1)

    first,second = perm[:i+1], perm[i+1:]
    second.sort()
    return first + second

def fast_next_permutation(perm):
    n = len(perm)
    i = n-2
    while (i >= 0 and perm[i] > perm[i+1]):
        i -= 1
    
    if i != -1:
        j = i+1
        while(j<n and perm[i] < perm[j]):
            j+=1
        swap(perm,i,j-1)

    i += 1
    j = n-1
    while i < j:
        swap(perm,i,j)
        i += 1
        j -= 1

pt = time()
n = 10
perm = list(range(1,n+1))
perm1 = list(range(1,n+1))
for i in range(fact(n)):
    perm = next_permutation(perm)
    fast_next_permutation(perm1)
    r = compare(perm,perm1)
    # print(perm,perm1)
    if r != None:
        print(perm)
        print(i,r)
        print(perm1)
        break
    # else:
    #     print(i,end=',')

print((time()-pt)*(10**3))
