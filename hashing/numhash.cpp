#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hashArr[100000]={0};
    for(int i=0; i<n; i++){
        hashArr[arr[i]-1]+=1;
    }
    for(int i=0; i<n; i++){
        cout<<hashArr[i]<<endl;
    }
}