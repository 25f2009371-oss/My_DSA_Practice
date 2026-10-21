
#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int size;
public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Queue overflow" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        arr[rear] = val;
        cout << "Pushed to queue" << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void start() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << arr[front] << endl;
        }
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(3);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);  // Queue overflow

    q.start();   // 10

    q.pop();     // Removes 10
    q.start();   // 20

    return 0;
}
