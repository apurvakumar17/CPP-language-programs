#include <bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout << "Enter your age to check eligibiity: ";
    cin >> age;
    if (age >= 18) {
        cout << "Your are eligible !";
    } else {
        cout << "Sorry you are not eligible !";
    }
    return 0;
}