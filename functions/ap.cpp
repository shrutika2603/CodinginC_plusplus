#include <iostream>
using namespace std;
#include <math.h>

int ap(int n){
    int term = 3*n + 7;
    return term;
}

int main()
{
    int n;
    cin>>n;
    ap(n);
    cout<<n<<"th term of the ap is "<<ap(n)<<endl;
}