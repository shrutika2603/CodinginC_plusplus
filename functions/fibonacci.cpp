// 0 1 1 2 3 5 8 13 21 34 55

#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
    

}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    cout<<n<<"th term of the series is "<<fibonacci(n-1)<<endl;

    return 0;
}