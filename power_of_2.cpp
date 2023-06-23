//Check whether a number is a power of 2 or not

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, ans;
    cin>>n;
    for(int i=0; i<=30; i++){
        ans = pow(2,i);
        if(ans == n){
            cout<<true<<endl;
        }
    }
    cout<<false<<endl;
}   