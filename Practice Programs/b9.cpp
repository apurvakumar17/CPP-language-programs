#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<int, int> couple = {2, 3};
    cout << couple.first << " " << couple.second << endl;
    pair<int, pair<int, char>> aj = {2, {6, 'T'}};
    cout << aj.first << aj.second.first << aj.second.second << endl;
    return 0;
}