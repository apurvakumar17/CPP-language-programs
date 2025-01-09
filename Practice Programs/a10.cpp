#include <iostream>
using namespace std;

int main() {
    char chars[] = {'a', 'p', 'u', 'r', 'v', 'a'};
    for (char a: chars) {
        cout << a;
    }
    cout << endl;

    for (int i = 2; i <= 2048; i = i * 2) {
        cout << i << "GB ";
    }
    cout << endl;

    string names[] = {"Apurva", "Kumar", "Ananya", "Kumar"};
    for (string n: names) {
        cout << n << endl;
    }
    return 0;
}