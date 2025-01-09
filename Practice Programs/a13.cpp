#include <bits/stdc++.h>
using namespace std;
int fact(int num) {
    if (num != 1) {
        return num * fact(num - 1);
    } else {
        return 1;
    }
}
int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Factorial of " << n << ": " << fact(n);
    return 0;
}