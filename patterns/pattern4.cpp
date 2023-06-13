/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    for(i=n; i>=1; i--){
        for(j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}