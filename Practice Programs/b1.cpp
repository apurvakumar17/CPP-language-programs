#include <bits/stdc++.h>
using namespace std;

class myClass {         //Class
    public:             //Access
        int myNum;          //Attribute
        string myString;    //Attribute
};

int main() {
    myClass myObj;  //created object of myClass

    myObj.myNum = 18;
    myObj.myString = "Apurva";

    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";

    myClass myObj2;
    myObj2.myNum = 12;
    myObj2.myString = "Ananya";

    cout << myObj2.myNum << endl;
    cout << myObj2.myString << endl;
    return 0;
}