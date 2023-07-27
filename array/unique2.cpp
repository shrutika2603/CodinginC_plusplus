/* leetcode ques: return true if the number of occurence of each element is unique 
eg: [1, 2, 2, 1, 1, 3] --> 1 : 3, 2 : 2, 3 : 1 */

#include <iostream>
using namespace std;

int main(){
    int n, c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        int j = arr[i];
        int k=0;
        while(k<n){
            if(j==arr[k]){
                c=c+1;
            }
            k++;
        }
        cout<<c<<" ";
        c=0;
    }
    return 0;
}