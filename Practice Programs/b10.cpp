#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, int>> ditto;
    ditto.push_back({2,3});
    cout << ditto.back().first << endl;
    ditto.emplace_back(4,5); //same as push_back()
    cout << ditto.back().first << endl;
    for (int i = 0; i < 10; i++) {
        ditto.emplace_back(i, i + 2);
    }
    cout << ditto.size() << endl;
    
    vector<int> vc(7, 100);  // default bulk initialization
    for (int i: vc) {
        cout << i << ", ";
    }
    cout << endl;
    vector<int> vc2(7);  // default bulk initialization
    for (int i: vc2) {
        cout << i << ", ";
    }
    cout << endl;
    
    return 0;
}