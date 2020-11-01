A = [int(x) for x in (input("Enter array with single space: ").split())]
n = len(A)
for i in range(0, n):
    min = i
    for j in range(i, n):
        if A[j]<A[min]:
            min = j
    A[i],A[min] = A[min],A[i]
print("Sorted list is: " , A)