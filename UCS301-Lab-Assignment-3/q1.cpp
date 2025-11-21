#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int st[MAX];
    int top = -1;
    int choice, x;

    do {
        cout << "\nSTACK MENU\n";
        cout << "1. push\n2. pop\n3. isEmpty\n4. isFull\n5. display\n6. peek\n7. exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (top == MAX - 1) cout << "Stack Overflow\n";
            else {
                cout << "Enter value to push: ";
                cin >> x;
                top++;
                st[top] = x;
                cout << "Pushed " << x << "\n";
            }
        } else if (choice == 2) {
            if (top == -1) cout << "Stack Underflow\n";
            else {
                cout << "Popped " << st[top] << "\n";
                top--;
            }
        } else if (choice == 3) {
            if (top == -1) cout << "Stack is EMPTY\n";
            else cout << "Stack is NOT empty\n";
        } else if (choice == 4) {
            if (top == MAX - 1) cout << "Stack is FULL\n";
            else cout << "Stack is NOT full\n";
        } else if (choice == 5) {
            if (top == -1) cout << "Stack is empty\n";
            else {
                cout << "Stack (top to bottom): ";
                for (int i = top; i >= 0; i--) cout << st[i] << " ";
                cout << "\n";
            }
        } else if (choice == 6) {
            if (top == -1) cout << "Stack is empty, no peek\n";
            else cout << "Top element: " << st[top] << "\n";
        } else if (choice == 7) {
            cout << "Exiting\n";
        } else {
            cout << "Invalid choice\n";
        }
    } while (choice != 7);

    return 0;
}
