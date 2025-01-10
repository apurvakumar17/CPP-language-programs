#include <bits/stdc++.h>
using namespace std;
void swap1(int* a, int* b) {
    int k = *a;
    *a = *b;
    *b = k;
}
void swap2(int &a, int &b) {
    int k = a;
    a = b;
    b = k;
}
void addworld(string &hw) {
    hw = hw + " World";
}
int main() {
    int x = 5;
    int y = 10;
    cout << "Before Swap: " << endl;
    cout << "Value 1: " << x << endl;
    cout << "Value 2: " << y << endl;
    swap1(&x, &y);
    cout << "After Swap1: " << endl;
    cout << "Value 1: " << x << endl;
    cout << "Value 2: " << y << endl;
    swap2(x, y);
    cout << "After Swap2: " << endl;
    cout << "Value 1: " << x << endl;
    cout << "Value 2: " << y << endl;
    string greet = "Hello";
    addworld(greet);
    cout << greet << endl;
    return 0;
}