//Counting number of notes in a given amount

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes100 = 0;
    int notes50 = 0;
    int notes20 = 0;
    int notes1 = 0;

    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes20 = amount / 20;
    amount %= 20;

    notes1 = amount;

    cout << "Number of hundred rs notes: " << notes100 << endl;
    cout << "Number of fifty rs notes: " << notes50 << endl;
    cout << "Number of twenty rs notes: " << notes20 << endl;
    cout << "Number of one rs notes: " << notes1 << endl;

    return 0;
}

