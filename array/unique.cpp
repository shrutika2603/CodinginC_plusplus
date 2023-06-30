/* Finding unique element in an array*/

#include <iostream>
using namespace std;

int unique(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[7]={2,4,7,4,2,7,9};
    cout<<unique(arr, 7)<<endl;
    return 0;
}