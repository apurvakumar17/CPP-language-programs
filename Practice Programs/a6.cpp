#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;
    char cname[] = "Apurva";
    cout << strlen(cname) << name.length();
    return 0;
}