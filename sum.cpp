//Display n numbers and their sum

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int i=1, sum=0;
    while(i<=n){
        cout<<i<<" "<<endl;
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
}