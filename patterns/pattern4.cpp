/*
4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1
*/
#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    for(i=n; i>=1; i--){
        for(j=n; j>=1; j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}