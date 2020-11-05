A = [int(x) for x in input("Enter the array with space in between: ").split()]
for y in range(len(A)-1):
    for x in range(len(A)-1):
        if A[x]>A[x+1]:
            A[x],A[x+1] = A[x+1],A[x]
print("Sorted array is ", A)