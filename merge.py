def MergeSort(A):
    if len(A)>1:
        mid = len(A)//2
        L = A[:mid]
        R = A[mid:]

        MergeSort(L)
        MergeSort(R)

        Merge(A, L, R)

def Merge(A, L, R):
    i = j = k = 0
    while i<len(L) and j<len(R):
        if L[i]<R[j]:
            A[k] = L[i]
            i = i+1
        else:
            A[k] = R[j]
            j = j+1
        k = k+1

    while i<len(L):
        A[k] = L[i]
        i = i+1
        k = k+1

    while j<len(R):
        A[k] = R[j]
        j = j+1
        k = k+1

if __name__ == '__main__':
    A = [int(x) for x in input("Enter list with space: ").split()]
    MergeSort(A)
    print("Sorted List is: ", A)