#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    cout << "Enter first word: ";
    cin >> s1;
    cout << "Enter second word: ";
    cin >> s2;
    cout << "Enter third word: ";
    cin >> s3;

    string sentence = s1 + " " + s2 + " " + s3;
    cout << "Combined sentence: " << sentence;
    return 0;
}
