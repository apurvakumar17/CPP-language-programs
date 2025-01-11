#include <iostream>
#include <map>
using namespace std;
void show(map<int, char> d) {
    for (auto k: d) {
        cout << "{" << k.first << ", " << k.second << "}, ";
    }
    cout << endl;
}
int main() {
    map<int, char> dict = {{2, 'A'}, {3, 'C'}, {1, 'B'}};
    dict.insert({2, 'K'});
    show(dict);
    cout << dict.at(2) << endl;
    dict.erase(2);
    show(dict);
    dict[6] = 'K';
    show(dict);
    dict.insert({-23, 'V'});
    show(dict);
    return 0;
}