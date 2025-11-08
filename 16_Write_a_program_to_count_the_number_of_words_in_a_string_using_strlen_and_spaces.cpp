#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence (use underscores instead of spaces): ";
    cin >> str;

    int count = 1; // at least one word
    for(char c : str) {
        if(c == '_')
            count++;
    }
    cout << "Number of words = " << count;
    return 0;
}
