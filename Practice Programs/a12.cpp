#include <bits/stdc++.h>
using namespace std;
int main() {
    string name = "Apurva";
    for (char i: name) {
        cout << i << " ";
    }
    cout << endl;
    string* nameadd = &name;
    cout << "Address of name: " << nameadd << endl;
    cout << "Value from pointer: " << *nameadd << endl;
    return 0;
}