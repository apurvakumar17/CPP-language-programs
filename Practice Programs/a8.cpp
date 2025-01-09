#include <bits/stdc++.h>
using namespace std;
int main () {
    cout << "Table of? : ";
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " X " << i << " = " << n * i << endl;
        for (int j = 1; j <= 10; j++) {
            cout << "   " << i << " X " << j << " = " << i * j << endl;
        }
    }
    return 0;
}