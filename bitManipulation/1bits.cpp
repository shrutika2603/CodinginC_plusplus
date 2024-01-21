// Calculate number of 1 bits

#include <iostream>
using namespace std;
int main(){
    int n, ans=0;
    cin>>n;
    while(n){
        if(n&1){
            ans++;
        }
        n=n>>1;
    }
    cout<<ans<<endl;
}