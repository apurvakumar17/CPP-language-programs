#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> into = {1,4,7,2,5,3,6,9,0};
    auto itr = into.begin();
    cout << *itr << endl;
    while (itr != into.end()) {
        cout << *itr << " ";
        itr++;
    }
    cout << endl;
    into.erase(into.begin(), into.end() - 4);
    for (auto i: into) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}