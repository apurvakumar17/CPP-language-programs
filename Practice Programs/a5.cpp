#include <bits/stdc++.h>
using namespace std;
int main() {
    string name1;
    cout << "Enter name1: ";
    cin >> name1;
    cout << "You entered: " << name1 << endl; //Get upto space in input
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string name2;
    cout << "Enter name2: ";
    getline(cin, name2);   //Get full line in input
    cout << "You entered: " << name2;
    return 0;
}