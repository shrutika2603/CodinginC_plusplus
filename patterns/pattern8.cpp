/*
1
2 3
3 4 5
4 5 6 7
*/

// 1st method
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int c = i;
        for(int j=1; j<=i; j++){
            cout<<c<<" ";
            c++;
            
        }
        cout<<endl;
    }
}
*/

// method 2 : without using third variable

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<(2*i); j++){
            cout<<j<<" ";   
        }
        cout<<endl;
    }
}
