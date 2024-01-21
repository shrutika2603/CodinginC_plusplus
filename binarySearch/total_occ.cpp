#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;  
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key){
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;  
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int totalOccurrence = (lastOccurence(arr,size,key)-firstOccurence(arr,size,key))+1;
    cout<<"Total occurrence of "<<key<<" is : "<<totalOccurrence<<endl;

}