#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter size of array1 : ";
    cin>>n;

    int arr1[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int sum;
    cout<<"Enter the targetted sum : ";
    cin>>sum;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr1[i]+arr1[j])==sum){
                cout<<arr1[i]<<" "<<arr1[j]<<endl;
            }
        }
    }
    return 0;
}