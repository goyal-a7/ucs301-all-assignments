#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 1000;
    int st[MAX];     
    int top = -1;

    string exp;
    cout << "Enter a postfix expression (use spaces between numbers/operators): ";
    getline(cin, exp);

    for (int i = 0; i < exp.size(); i++) {
        char ch = exp[i];

        if (ch == ' ') continue;

        if (ch >= '0' && ch <= '9') {
            int num = 0;
            while (i < exp.size() && exp[i] >= '0' && exp[i] <= '9') {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            i--;
            top++;
            st[top] = num;
        }
        else {
            
            int val2 = st[top]; top--;
            int val1 = st[top]; top--;

            int res = 0;
            if (ch == '+') res = val1 + val2;
            else if (ch == '-') res = val1 - val2;
            else if (ch == '*') res = val1 * val2;
            else if (ch == '/') res = val1 / val2;

            
            top++;
            st[top] = res;
        }
    }

    cout << "Result: " << st[top] << "\n";
    return 0;
}
