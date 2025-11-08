#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    if(a == b)
        cout << "Strings are equal";
    else if(a > b)
        cout << "First string is greater";
    else
        cout << "Second string is greater";
    return 0;
}
