// Calculate complement of a number. For eg: 5 --> 2 ; 7 --> 0;

#include <iostream>
using namespace std;

int main()
{
    int n, m, mask = 0;
    cin >> n;
    m = n;

    if (n == 0){
        cout << 1 << endl;
    }
    else{
        while (m != 0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        cout << ans << endl;
    }
}