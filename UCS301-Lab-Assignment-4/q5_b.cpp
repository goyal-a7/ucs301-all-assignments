#include <iostream>
using namespace std;

int main() {
    const int MAX = 100; 
    int q[MAX];           
    int front = 0, rear = -1; 
    int choice, x;

    do {
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {  // Push
            cout << "Enter element: ";
            cin >> x;

            if (rear == MAX - 1) {
                cout << "Queue Full\n";
            } else {
                rear++;
                q[rear] = x;

                // Rotate previous elements to maintain stack order
                for (int i = front; i < rear; i++) {
                    int temp = q[front];
                    for (int j = front; j < rear; j++) {
                        q[j] = q[j + 1];
                    }
                    q[rear] = temp;
                }
            }
        }
        else if (choice == 2) {  // Pop
            if (front > rear) {
                cout << "Stack Empty\n";
            } else {
                cout << "Popped: " << q[front] << "\n";
                front++;
            }
        }
        else if (choice == 3) {  // Peek
            if (front > rear) {
                cout << "Stack Empty\n";
            } else {
                cout << "Top element: " << q[front] << "\n";
            }
        }
        else if (choice == 4) {  // Display
            if (front > rear) {
                cout << "Stack Empty\n";
            } else {
                cout << "Stack elements: ";
                for (int i = front; i <= rear; i++) {
                    cout << q[i] << " ";
                }
                cout << "\n";
            }
        }
        else if (choice == 5) {
            cout << "Exiting\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
