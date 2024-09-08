#include "lib/lib.h"

#include <iostream>

#include <map>


using namespace std;



int main() {
    cout << "Hello World!" << "\n";

    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    cout << "John is: " << people["John"] << "\n";

    cout << "Adele is: " << people["Adele"] << "\n";

    int c = 2, d = 9;
    cout << c << " + " << d << " = " << add(c,d) << "\n";

    return 0;
}
