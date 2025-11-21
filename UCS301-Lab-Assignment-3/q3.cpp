#include <iostream>
using namespace std;

int main() {
    string expr;
    cout << "Enter an expression: ";
    getline(cin, expr); 

    char stack[100];  
    int top = -1;      

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            top++;
            stack[top] = ch;
        }

        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {  
                cout << "Not Balanced\n";
                return 0;     
            }

            char open = stack[top];
            top--;                   

            if (ch == ')' && open != '(') {
                cout << "Not Balanced\n";
                return 0;
            }
            if (ch == '}' && open != '{') {
                cout << "Not Balanced\n";
                return 0;
            }
            if (ch == ']' && open != '[') {
                cout << "Not Balanced\n";
                return 0;
            }
        }
    }

    
    if (top == -1) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced\n";
    }

    return 0;
}
