#include <iostream>
#include <string>
using namespace std;

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    const int MAX = 1000;
    char stack[MAX];  
    int top = -1;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if ((ch >= 'a' && ch <= 'z') || 
            (ch >= 'A' && ch <= 'Z') || 
            (ch >= '0' && ch <= '9')) {
            postfix += ch;
        }
       
        else if (ch == '(') {
            stack[++top] = ch;
        }
        
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix += stack[top--];
            }
            top--; 
        }
        
        else {
            int prec;
            if (ch == '+' || ch == '-') prec = 1;
            else if (ch == '*' || ch == '/') prec = 2;
            else if (ch == '^') prec = 3;
            else prec = 0;

          
            while (top != -1) {
                int topPrec;
                if (stack[top] == '+' || stack[top] == '-') topPrec = 1;
                else if (stack[top] == '*' || stack[top] == '/') topPrec = 2;
                else if (stack[top] == '^') topPrec = 3;
                else topPrec = 0;

                if (topPrec >= prec) {
                    postfix += stack[top--];
                } else {
                    break;
                }
            }
            stack[++top] = ch;
        }
    }

    while (top != -1) {
        postfix += stack[top--];
    }

    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
