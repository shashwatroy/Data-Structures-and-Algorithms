#include <iostream>
using namespace std;
void bubble(int arr[], int size){
    int i, j, k = 0;
    for(i=0;i<size;i++){
        for(j=0;j<size-k-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print_arr(int arr[], int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<", ";
}
int main(){
    int arr[] = {5, 9, 4, 8, 7, 3, 2, 0, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, n);
    print_arr(arr, n);
}
