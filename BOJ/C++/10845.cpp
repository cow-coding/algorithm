#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {}
    Node(int e) {
        this->data = e;
        this->next = NULL;
    }
    ~Node(){}
};

class SLinkedList {
public:
    Node* head;
    Node* tail;

    SLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void addFront(int X) {
        Node* v = new Node(X); // new Node

        if (head == NULL) {
            // list is empty
            head = tail = v;
        }else {
            v->next = head;
            head = v;
        }
    }

    int removeFront() {
        if (head == NULL) {
            return -1;
        }else{
            Node* tmp = head;
            int result = head->data;

            head = head->next;
            delete tmp;
            return result;
        }
    }

    int front() {
        if (head == NULL) {
            return -1;
        }else {
            return head->data;
        }
    }

    int rear() {
        if (head == NULL) {
            return -1;
        }else {
            return tail->data;
        }
    }

    int empty() {
        if (head == NULL) {
            return 1;
        }else {
            return 0;
        }
    }

    void showList() {
        if (head == NULL) {
            cout << -1 << "\n";
        }else {
            for (Node* curr = head; curr != NULL; curr=curr->next) {
                // head부터 tail(next가 null)까지 반복이동
                cout << curr->data << " ";
            }
            cout << "\n";
        }
    }

    void addBack(int X) {
        Node* v = new Node(X);

        if (head == NULL) {
            head = tail = v;
        }else {
            tail->next = v;
            tail = v;
        }
    }

    ~SLinkedList() {}
};


class LinkedQ {
public:
    int n = 0;
    Node* f;
    Node* r;
    SLinkedList Q;

    LinkedQ() {
        f = NULL;
        r = NULL;
    }

    bool isEmpty() {
        return n == 0;
    }

    int size() {
        return n;
    }

    int front() {
        return Q.front();
    }

    int rear() {
        return Q.rear();
    }

    void enqueue(int data) {
        Q.addBack(data);
        n++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "-1\n";
        }else{
            cout << Q.front() << "\n";
            Q.removeFront();
            n--;
        }
    }
};

int main() {
    int s, n;
    string cmd;

    cin >> n;

    LinkedQ q;

    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;

            q.enqueue(x);
        }else if (cmd == "pop") {
            q.dequeue();
        }else if (cmd == "size") {
            cout << q.size() << "\n";
        }else if (cmd == "empty") {
            cout << q.isEmpty() << "\n";
        }else if (cmd == "front") {
            cout << q.front() << "\n";
        }else if (cmd == "back") {
            cout << q.rear() << "\n";
        }
    }

}
