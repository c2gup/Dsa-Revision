#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* createNode(){

    int data;
    cout << "Enter the data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    };

    Node* rootNode = new Node(data);
    cout << "Enter the left child of " << data << ": ";

    rootNode->left = createNode();
    cout << "Enter the right child of " << data << ": ";
    rootNode->right = createNode();

    return rootNode;
}

int main(){
    cout << "Creating a binary tree..." << endl;
    Node* root = createNode();
    cout << "Binary tree created successfully!" << endl;
    return 0;
}


