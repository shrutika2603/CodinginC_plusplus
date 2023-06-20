#include <iostream>
using namespace std;

int EvenOdd(int n){
    if (n%2==0){
        return 1;
    }

    return 0;
}

/* Method 2 : 
bool isEven(int n){
    if(n&1){
        return 0; //odd
    }
    else{
        return 1; //even
    }
}
*/
int main(){
    int n;
    cin>>n;
    if (EvenOdd(n)){
        cout << "Number is even " << endl;
    }
    else{
        cout << "Number is odd "<< endl;
    }
}

