#include <iostream>
using namespace std;

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1 || front > rear);
}

bool isFull() {
    return (rear == SIZE - 1);
}

void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is Full\n";
    } else {
        if (front == -1) front = 0;
        queue[++rear] = x;
        cout << x << " enqueued\n";
    }
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is Empty\n";
    } else {
        cout << queue[front++] << " dequeued\n";
    }
}

void display() {
    if (isEmpty()) {
        cout << "Queue is Empty\n";
    } else {
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << "\n";
    }
}

void peek() {
    if (isEmpty()) cout << "Queue is Empty\n";
    else cout << "Front element: " << queue[front] << "\n";
}

int main() {
    int choice, value;
    while (true) {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cin >> value; enqueue(value); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}
