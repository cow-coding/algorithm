#include <iostream>
#include <string>
using namespace std;

class Node {
private:
    Node* next;
    int data;
    
public:
    Node() {
        this->next = NULL;
        data = 0;
    }
    
    Node(int data) {
        this->next = NULL;
        this->data = data;
    }
    
    friend class dequeue;
};

class dequeue {
private:
    Node* f;
    Node* r;
    int sz;
    
public:
    dequeue() {
        f = r = NULL;
        sz = 0;
    }
    
    void push_front(int d) {
        Node* newNode = new Node(d);
        
        if (empty()) {
            f = newNode;
            r = newNode;
        }else {
            newNode->next = f;
            f = newNode;
        }
        
        sz++;
    }
    
    int pop_front() {
        if (empty()) return -1;
        
        int result = f->data;
        Node* old = f;
        
        f = f->next;
        
        sz--;
        
        delete old;
        return result;
    }
    
    void push_back(int d) {
        Node* newNode = new Node(d);
        
        if (empty()) {
            f = newNode;
            r = newNode;
        }else {
            r->next = newNode;
            r = newNode;
        }
        
        sz++;
    }
    
    int pop_back() {
        if (empty()) return -1;
        
        int result = r->data;
        Node* old = r;
        
        for (Node* curr = f; curr != r; curr = curr->next) {
            if (curr->next == r) {
                r = curr;
                break;
            }
        }
        
        sz--;
        
        delete old;
        return result;
    }
    
    bool empty() {
        return sz == 0;
    }
    
    int size() {
        return sz;
    }
    
    int front() {
        if (empty()) return -1;
        
        return f->data;
    }
    
    int back() {
        if (empty()) return -1;
        
        return r->data;
    }
};

int main() {
    int N;
    dequeue deq;
    
    cin >> N;
    
    while (N--) {
        string command;
        int n;
        
        cin >> command;
        
        if (command == "push_front") {
            cin >> n;
            
            deq.push_front(n);
        }else if (command == "push_back") {
            cin >> n;
            
            deq.push_back(n);
        }else if (command == "pop_front") {
            cout << deq.pop_front() << "\n";
        }else if (command == "pop_back") {
            cout << deq.pop_back() << "\n";
        }else if (command == "size") {
            cout << deq.size() << "\n";
        }else if (command == "empty") {
            cout << deq.empty() << "\n";
        }else if (command == "front") {
            cout << deq.front() << "\n";
        }else if (command == "back") {
            cout << deq.back() << "\n";
        }
    }
}
