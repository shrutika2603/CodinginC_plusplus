#include <iostream>
#include <math.h>
using namespace std;

int getMax(int num[], int n){
    int maxi = INT8_MIN;
    //int max = INT8_MIN;
    for(int i=0; i<n; i++){
       maxi = max(maxi, num[i]);
    //    if(num[i]>max){
    //         max=num[i];
    //    }
    }
    return maxi;
}

int getMin(int num[], int n){
    int mini = INT8_MAX;
    //int min = INT8_MAX;
    for(int i=0; i<n; i++){
        mini = min(mini, num[i]);
        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cin>>size;
    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"Maximum element is : "<<getMax(num, size)<<endl;
    cout<<"Minimum element is : "<<getMin(num, size)<<endl;
    
    return 0;
}