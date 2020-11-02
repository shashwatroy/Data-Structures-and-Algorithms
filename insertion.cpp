#include <iostream>
using namespace std;

void insertion(int arr[], int size){
    int j=0;
    for(int i=1;i<size;i++){
        j=i;
        while(arr[j-1]>arr[j] && j>0){
            swap(arr[j-1], arr[j]);
            j = j-1;
        }
    }
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<", ";
    }
}
int main(){
    int arr[] = {9, 5, 6, 7, 0, 8, 3, 1, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr, n);
    printarr(arr, n);
}