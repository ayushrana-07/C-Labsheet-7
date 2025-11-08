#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter character: ";
    cin >> ch;

    int pos = str.rfind(ch);
    if(pos != string::npos)
        cout << "Last occurrence at position " << pos + 1;
    else
        cout << "Character not found";
    return 0;
}
