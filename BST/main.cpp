#include <iostream>
using namespace std;

template<typename T>
class BTNode{
public:
    T data;
    BTNode *left;
    BTNode *right;

    BTNode (T data){
        this->data=data;
        left = NULL;
        right = NULL;
    }
    ~BTNode(){
        delete left;
        delete right;
    }
};

class BST{
private:
    BTNode<int>* root;
    void printTree(BTNode<int>* root){
        if (root == 0){
            return;
        }
        cout<<root->data<<": ";
        if (root->left!=NULL){
            cout<<"L"<<root->left->data;
        }
        if (root->right!=NULL){
            cout<<"R"<<root->right->data;
        }
        cout<<endl;
        printTree(root->left);
        printTree(root->right);
    }

    bool hasData(BTNode<int>* root,int data){
        if (root==NULL) return false;
        if(root->data==data)
            return true;

        if(root->data>data){
            return hasData(root->left,data);
        }else{
            return hasData(root->right,data);
        }
    }

public:
    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }

    void deleteData(int data){

    }
    void insert(int data){

    }
    bool hasData(int data){
       return hasData(root,data);
    }
    void print(){
        printTree(root);
    }
};

int main() {

    return 0;
}
