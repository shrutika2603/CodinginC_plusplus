#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter size of array1 : ";
    cin>>n;
    cout<<"Enter size of array2 : ";
    cin>>m;
    int arr[n];
    int array[m];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0; j<m; j++){
        cin>>array[j];
    }
    
    for(int k=0; k<n; k++){
        int ele=arr[k];
        for(int l=0; l<m; l++){
            if(array[l]==ele){
                cout<<ele<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}