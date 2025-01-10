#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}
double add(double x, double y) {
    return x + y;
}
/*
multiple functions in c++ can have 
same name as long as number or type of 
parameters are different
*/
int main() {
    cout << "2 + 3 = " << add(2, 3) << endl;
    cout << "2.3 + 3.2 = " << add(2.3, 3.2) << endl; 
    return 0;
}