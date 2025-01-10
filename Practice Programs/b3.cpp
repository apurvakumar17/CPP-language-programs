#include <iostream>
using namespace std;

class makeClass {
    public:
        int roll;
        char grade;
        makeClass(int a, char b) {
            roll = a;
            grade = b;
        }
};

class makeScore {
    public:
        int roll;
        int score;
        makeScore(int a, int b);
};

class sum {
    public:
        int giveSum(int a, int b) {
            return a + b;
        }
        sum(int x, int y) {
            cout << giveSum(x, y) << endl;
        }
};

class summer {
    public:
        int result;
        int add(int a, int b) {
            return a + b;
        }
        summer(int x, int y) {
            result = add(x, y);
        }
};

makeScore::makeScore(int a, int b) {
    roll = a;
    score = b;
}

int main() {
    makeClass stud1(12, 'A');
    makeClass stud2(13, 'B');
    cout << stud1.roll << stud1.grade << endl;
    cout << stud2.roll << stud2.grade << endl;

    makeScore s1(10, 98);
    makeScore s2(11, 99);
    cout << s1.roll << " " << s1.score << endl;
    cout << s2.roll << " " << s2.score << endl;

    sum add1(2, 3);
    sum add2(6, 8);

    summer add01(2, 3);
    cout << "Result = " << add01.result << endl;

    summer add02(6, 8);
    cout << "Result = " << add02.result << endl;

    return 0;
}