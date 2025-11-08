#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, last;
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;

    string full = first + " " + last;
    cout << "Full name: " << full;
    return 0;
}
