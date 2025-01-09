#include <bits/stdc++.h>
using namespace std;

int main() {
    bool myBool1 = false, myBool2 = true;
    cout << myBool1 << myBool2 << "\n";
    char firstChar = 97;
    cout << firstChar << endl;
    string firstName = "Apurva";
    string lastName = "Kumar";
    cout << firstName + " " + ' ' + lastName << endl;

    firstName.append(lastName);
    cout << firstName << endl;

    // both length() and size() are same; 
    cout << "Length of your name is: " << firstName.length() << endl;
    cout << "Length of your name is: " << firstName.size() << endl;

    cout << firstName[7] << endl;
    cout << "Last character of your name is: " << firstName[firstName.length() - 1] << endl;

    //WOW Strings are mutable in C++ (:O);
    string greet = "Hello";
    cout << "\nBefore: " << greet << "\n";
    greet[0] = 'J';
    cout << "WOW String edited: " << greet << "\n";
    greet.at(1) = 'o';
    cout << "WOW String edited: " << greet << "\n";
    return 0;
}