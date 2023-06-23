// Check whether the character entered by user is uppercase, lowercase, numeric or special character

#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter any character : "<<endl;
    cin>> c;
    int a = c;
    if (a>96 && a<123){
        cout<<"This is lowercase character"<<endl;
    }
    else if(a>64 && a<91){
        cout<<"This is uppercase character"<<endl;
    }
    else if (a>47 && a<58){
        cout<<"This is a numeric character"<<endl;
    }
    else{
        cout<<"This is a special character"<<endl;
    }

}