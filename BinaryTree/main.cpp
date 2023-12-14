#include <iostream>
#include <queue>
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

BTNode<int>* takeInput(){

    int rootData;
    cout<<"Enter the data: ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BTNode<int>* root= new BTNode<int>(rootData);
    root->left = takeInput();
    root->right = takeInput();

    return root;
}

BTNode<int>* takeInputLevelwise(){

    int rootData;
    queue<BTNode<int>*> q;
    cout<<"Enter Root: ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BTNode<int>* root = new BTNode<int>(rootData);
    q.push(root);

    while (!q.empty()){
        BTNode<int>* f = q.front();
        q.pop();

        cout<<"Enter the left child of "<<f->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            BTNode<int>* child = new BTNode<int>(leftChildData);
            q.push(child);
            f->left=child;
        }

        cout<<"Enter the right child of "<<f->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
            BTNode<int>* child = new BTNode<int>(rightChildData);
            q.push(child);
            f->right=child;
        }
    }

    return root;
}

int countNodes(BTNode<int>* root){
    if (root==0){
        return NULL;
    }
    return countNodes(root->left)+ countNodes(root->right)+1;
}

int maxDepth(BTNode<int>* root){
    if(root==NULL){
        return 0;
    }

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return max(left,right)+1;
}

bool helper(BTNode<int>* leftTree, BTNode<int>* rightTree){
    if (leftTree==NULL && rightTree!=NULL) return false;
    if (leftTree!=NULL && rightTree==NULL) return false;
    if (leftTree==NULL && rightTree==NULL) return true;
    if (leftTree->data != rightTree->data) return false;

    return helper(leftTree->left,rightTree->right) && helper(leftTree->right,rightTree->left);
}

bool symmetricTree(BTNode<int>* root){
    if(root==NULL) return true;

    return helper(root->left,root->right);

}

bool findNode(BTNode<int>* root, int key){
    if (root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    return (findNode(root->left,key) || findNode(root->right,key));
}

int minElement(BTNode<int>* root){
    if(root==NULL){
        return INT32_MAX;
    }
    int ans = root->data;
    int leftMin = minElement(root->left);
    int rightMin = minElement(root->right);

    return min(ans,min(leftMin,rightMin));
}

void minValueOtherWay(BTNode<int>* root, int &ans){
    if(root==NULL){
        return;
    }
    ans = min(root->data, ans);
    minValueOtherWay(root->left,ans);
    minValueOtherWay(root->right,ans);
}

int maxElement(BTNode<int>* root){
    if(root==NULL){
        return INT32_MIN;
    }
    int ans = root->data;
    int leftMin = maxElement(root->left);
    int rightMin = maxElement(root->right);

    return max(ans,max(leftMin,rightMin));
}

int countLeafNode(BTNode<int>* root){
    if (root==NULL){
        return 0;
    }
    if(root->left==NULL & root->right==NULL) {
        return 1;
    }
    return countLeafNode(root->left) + countLeafNode(root->right);
}


int main() {

//    BTNode<int>* root = new BTNode<int>(1);
//    BTNode<int>* n1 = new BTNode<int>(2);
//    BTNode<int>* n2 = new BTNode<int>(3);
//
//    root->left=n1;
//    root->right=n2;


    BTNode<int>* root = takeInputLevelwise();

    printTree(root);
    cout<<endl;
//    cout<<maxDepth(root);
    cout<<symmetricTree(root);


delete root;

    return 0;
}
