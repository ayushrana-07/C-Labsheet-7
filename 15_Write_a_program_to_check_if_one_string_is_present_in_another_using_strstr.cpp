#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter main string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if(s1.find(s2) != string::npos)
        cout << "Second string is present in first";
    else
        cout << "Not present";
    return 0;
}
