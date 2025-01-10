#include <iostream>
using namespace std;

class salAcc {
    private:
        int salary;
        
    public:
        void setsal(int sal) {
            salary = sal;
        }

        int getsal() {
            return salary;
        }
};

int main() {
    salAcc sal1;
    sal1.setsal(100000);
    cout << "Salary is " << sal1.getsal() << endl;
    return 0;
}