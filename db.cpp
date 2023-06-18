#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<0){
        n=-n;
    }
    int m = ~n;
    long int ans = 0;
    int i = 0, bit;
    
    while(n!=0){
        bit = m & 1;
        ans = (bit * pow(10, i)) + ans;
        m=m>>1;
        i++;
        }
    cout<<"Answer is : "<< ans <<endl; 
}