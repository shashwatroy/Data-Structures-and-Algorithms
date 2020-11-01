#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int sizeofarray, min, i, j;
    int A[10];
    cout<<"Enter Size of array ";
    cin >> sizeofarray;
    for (i = 0; i < sizeofarray; ++i)
    {
        cout<< "Enter "<< i+1 << " element of array \n";
        cin >> A[i];
    }
    for(i=0; i<sizeofarray; i++){
        min = i;
        for(j=i; j<sizeofarray; j++){
            if(A[j]<A[min])
                min = j;
        }
        swap(&A[i], &A[min]);
    }
    for (i=0; i<sizeofarray; i++)
    cout<<A[i]<<", ";
    return 0;
}
