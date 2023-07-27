#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    int n, arr[MAX], ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }

    for(int i=1; i<n; i++){
        ans = ans^i;
    }

    cout<<ans<<endl;
}