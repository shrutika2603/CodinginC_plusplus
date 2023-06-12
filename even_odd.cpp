#include<iostream>
using namespace std;

int main(){
    int n, sum=0, pro=1;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout<<i<<" is even\n";
            sum=sum+i;
        }
        else{
            cout<<i<<" is odd\n";
            pro=pro*i;
        }
    }
    cout<<"Sum of even numbers is "<<sum<<endl;
    cout<<"Product of odd numbers is "<<pro<<endl;
}