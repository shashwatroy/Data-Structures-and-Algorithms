A = [int(x) for x in input("Enter array with space in: ").split()]
for i in range(1, len(A)):
    j = i
    while A[j-1]>A[j] and j>0:
        A[j],A[j-1] = A[j-1],A[j]
        j = j-1
print("Sorted array is ", A)