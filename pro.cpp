//Calculate difference between product and sum of digits of an integer

#include <iostream>
using namespace std;
int main(){
    int n, sum =0, pro=1;
    cin>>n;
    while(n!=0){
        int rem = n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    int diff=pro-sum;
    cout<<sum<<endl;
    cout<<pro<<endl;
    cout<<diff<<endl;
    
}