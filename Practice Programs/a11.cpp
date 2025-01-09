#include <iostream>
#include <string>

using namespace std;
int main() {
    struct soeclass{
        int rollno;
        string name;
        char grade;
    };
    cout << "How many students ?: ";
    int n;
    cin >> n;
    struct soeclass stud1[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details of student-" << i + 1 << ":" << endl;
        cout << "Roll No.: ";
        cin >> stud1[i].rollno;
        cin.ignore(); //Clear input buffer
        cout << "Enter name: ";
        getline(cin, stud1[i].name);
        cout << "Enter grade: ";
        cin >> stud1[i].grade;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Roll No. of student-" << i + 1 << ": " << stud1[i].rollno << endl;
        cout << "Name of student-" << i + 1 << ": " << stud1[i].name << endl;
        cout << "Grade of student-" << i + 1 << ": " << stud1[i].grade << endl;
        cout << endl;
    }
    return 0;
}