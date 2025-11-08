#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, sub;
    cout << "Enter main string: ";
    cin >> str;
    cout << "Enter substring: ";
    cin >> sub;

    if(str.find(sub) != string::npos)
        cout << "Substring found";
    else
        cout << "Substring not found";
    return 0;
}
