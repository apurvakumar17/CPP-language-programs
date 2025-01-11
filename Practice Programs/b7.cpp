#include <iostream>
#include <set>
using namespace std;

void show(set<string> s) {
    for (string str: s) {
        cout << str << ", ";
    }
    cout << endl;
}

void show(set<string, greater<string>> s) {
    for (const string& str : s) {
        cout << str << ", ";
    }
    cout << endl;
}

int main() {
    set<string> mark;
    mark.insert("Banana");
    mark.insert("Apple");
    mark.insert("Carrot");
    mark.insert("Grapes");
    mark.insert("Avacado");
    show(mark);
    mark.erase("Grapes");
    show(mark);
    mark.insert("Grapes");

    set<string, greater<string>> mark2;
    mark2.insert("Banana");
    mark2.insert("Apple");
    mark2.insert("Carrot");
    mark2.insert("Grapes");
    mark2.insert("Avacado");
    show(mark);
    show(mark2);
    return 0;
}