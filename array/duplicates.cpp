#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if (arr[j]==arr[k]){
                cout<<arr[j]<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}