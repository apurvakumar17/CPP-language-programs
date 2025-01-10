#include <iostream>
#include <list>
#include <stack>
#include <queue>

using namespace std;

void show (list<char> g) {
    for (char a: g) {
        cout << a << ", ";
    }
    cout << endl;
}


int main() {
    list<char> grades;
    cout << grades.size() << endl;
    grades.push_back('A');
    cout << grades.size() << endl;
    show(grades);
    grades.push_front('B');
    show(grades);
    for (int i = 67; i <= 'Z'; i++) {
        grades.push_front(i);
    }
    show(grades);
    grades.pop_front();
    grades.pop_back();
    grades.pop_back();
    show(grades);
    cout << "-----------" << endl;

    stack<string> names;
    names.push("Apurva");
    names.push("Ananya");
    cout << names.size() << endl;
    names.pop();
    cout << names.size() << endl;
    names.push("Tushar");
    cout << names.top() << endl;
    cout << "-----------" << endl;
    
    queue<int> score;
    for (int i = 'A'; i <= 'R'; i++) {
        score.push(i);
    }
    cout << (char)score.front() << endl;
    cout << (char)score.back() << endl;
    score.pop();
    cout << (char)score.front() << endl;
    cout << "-----------" << endl;

    
    return 0;
}