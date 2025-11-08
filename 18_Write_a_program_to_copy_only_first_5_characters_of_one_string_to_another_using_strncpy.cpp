#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, copy;
    cout << "Enter a string: ";
    cin >> str;

    copy = str.substr(0, 5);
    cout << "Copied first 5 characters: " << copy;
    return 0;
}
