/*upper triangle
1
2 2
3 3 3
4 4 4 4

same for * upper triangle,  just replace i with "*" while printing result

one more type:
1
1 2
1 2 3
1 2 3 4
in this just print j instead of i 
*/

#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}