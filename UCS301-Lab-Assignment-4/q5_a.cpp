#include <iostream>
using namespace std;

#define SIZE 5
int q1[SIZE], q2[SIZE];
int front1 = -1, rear1 = -1, front2 = -1, rear2 = -1;

bool isEmpty(int front, int rear) { return (front == -1 || front > rear); }
bool isFull(int rear) { return (rear == SIZE - 1); }

void enqueue(int q[], int &front, int &rear, int x) {
    if (isFull(rear)) cout << "Queue Full\n";
    else {
        if (front == -1) front = 0;
        q[++rear] = x;
    }
}
int dequeue(int q[], int &front, int &rear) {
    return q[front++];
}

int main() {
    int choice, x;
    while (true) {
        cout << "\n1.Push 2.Pop 3.Exit\n";
        cin >> choice;
        if (choice == 1) {
            cin >> x;
            enqueue(q2, front2, rear2, x);
            while (!isEmpty(front1, rear1)) {
                enqueue(q2, front2, rear2, dequeue(q1, front1, rear1));
            }
            // swap
            int tq[SIZE]; for (int i = 0; i < SIZE; i++) tq[i] = q1[i];
            int tf = front1, tr = rear1;
            for (int i = 0; i < SIZE; i++) q1[i] = q2[i];
            front1 = front2; rear1 = rear2;
            for (int i = 0; i < SIZE; i++) q2[i] = tq[i];
            front2 = tf; rear2 = tr;
        }
        else if (choice == 2) {
            if (isEmpty(front1, rear1)) cout << "Stack Empty\n";
            else cout << dequeue(q1, front1, rear1) << " popped\n";
        }
        else break;
    }
}
