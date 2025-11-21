#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); 

    int n = s.length();
    char stack[100]; 
    int top = -1;

    for (int i = 0; i < n; i++) {
        stack[++top] = s[i];
    }

    cout << "Reversed string: ";
    while (top >= 0) {
        cout << stack[top--];
    }
    cout << endl;

    return 0;
}
