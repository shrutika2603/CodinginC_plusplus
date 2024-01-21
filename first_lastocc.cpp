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
    cout<<"First occurrence of "<<key<<" is at index: "<<firstOccurence(arr,size,key)<<endl;
    cout<<"Last occurrence of "<<key<<" is at index: "<<lastOccurence(arr,size,key)<<endl;

}