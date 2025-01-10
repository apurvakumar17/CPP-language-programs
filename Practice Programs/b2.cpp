#include <iostream>
using namespace std;

class welcome {
    public:
        void welcomeEnglish() {
            cout << "GCC welcomes you to the world of C++" << endl;
        }

        void welcomeHindi() {
            cout << "GCC आपका C++ की दुनिया में स्वागत करता है" << endl;
        }

        void welcomeFrench();

        void sayByes(int n) {
            while (n--) {
                cout << "Bye fellas" << endl;
            }
        } 

        int giveNum(int i);
};

void welcome::welcomeFrench() {
    cout << "GCC vous souhaite la bienvenue dans le monde du C++" << endl;
}

int welcome::giveNum(int i) {
    return i;
} 

int main() {
    welcome bot1;
    bot1.welcomeEnglish();
    bot1.welcomeHindi();
    bot1.welcomeFrench();
    bot1.sayByes(2);
    cout << bot1.giveNum(269) << endl;
    return 0;
}