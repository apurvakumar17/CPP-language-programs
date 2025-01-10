#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks = {8, 7};
    for (int i: marks) {
        cout << i;
    }
    cout << endl;
    cout << marks.back() << endl;
    cout << marks.front() << endl;
    marks.push_back(10);
    cout << marks.back() << endl;
    cout << marks.size() << endl;
    marks.back() = 11;
    cout << marks.back() << endl;
    marks[0] = 0;
    cout << marks[0] << endl;
    while (!marks.empty()) {
        marks.pop_back();
    }
    cout << marks.size() << endl;
    
}