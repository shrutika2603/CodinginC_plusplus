#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    int arr[6]= {71, 45, -23, 63, 12, 37};
    int brr[5]= {8, 5, -9, 11, 4};
    swap(arr,6);
    swap(brr, 5);
    
    printArray(arr,6); 
    printArray(brr,5);
    
    return 0;
}