#include <iostream>
using namespace std;

void oddify(int* list) {
    for (int i = 0; i < 5; i++) {
        if (list[i] % 2 == 0) {
            list[i]++;
        }
    }
}

void evenify(int* list) {
    for (int i = 0; i < 5; i++) {
        if (list[i] % 2 != 0) {
            list[i]++;
        }
    }
}

void minusOne(int list[5]) {
    for (int i = 0; i < 5; i++) {
        list[i]--;
    }
}

void showList(int list[5]) {
    cout << "[";
    for (int i = 0; i < 5; i++) {
        cout << list[i] << ",";
    }
    cout << "]" << endl;
}

int main() {
    int list1[] = {22, 56, 96, 55, 84};
    oddify(list1);
    showList(list1);
    evenify(list1);
    showList(list1);
    minusOne(list1);
    showList(list1);
    return 0;
}