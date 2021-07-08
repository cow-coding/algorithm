#include <iostream>
#include <vector>
using namespace std;

class Node {
    int data;
    Node* parent;
    Node* right;
    Node* left;
    
public:
    Node() {
        data = NULL;
        parent = NULL;
        right = NULL;
        left = NULL;
    }
    
    Node(int data) {
        this->data = data;
        parent = NULL;
        right = NULL;
        left = NULL;
    }
    
    void insert(Node* child) {
        if (child->data > data) {
            right = child;
            child->parent = this;
        }else {
            left = child;
            child->parent = this;
        }
    }
    
    friend class BST;
};

class BST {
private:
    Node* root;
    
public:
    BST() {
        root = NULL;
    }
    
    void insert(int data) {
        Node* newNode = new Node(data);
        Node* tmp = root;
        
        if (tmp == NULL) {
            root = newNode;
        }else {
            while (1) {
                if (tmp->data < data) {
                    if (tmp->right == NULL) break;
                    tmp = tmp->right;
                }else {
                    if (tmp->left == NULL) break;
                    tmp = tmp->left;
                }
            }
            
            tmp->insert(newNode);
        }
    }
    
    void postorder(Node* start) {
        Node* tmp = start;
        
        if (tmp == NULL) return;
        
        postorder(tmp->left);
        postorder(tmp->right);
        
        cout << tmp->data << "\n";
    }
    
    Node* getRoot() {
        return root;
    }
};

int main() {
    BST bst;
    int n;
    
    while (cin >> n) {
        bst.insert(n);
    }
    
    bst.postorder(bst.getRoot());
}
