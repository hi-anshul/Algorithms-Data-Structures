#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template<typename T>
class TreeNode{
public:
    int data;
    vector<TreeNode*> children;
    TreeNode(T data){
        this->data=data;
    }
    ~TreeNode(){
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }

};

void printTree(TreeNode<int> *root){
    if (root==NULL)
        return;
    cout<<root->data<<": ";
    for (int i = 0; i < root->children.size(); ++i) {
        cout<<root->children[i]->data<<" .";
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++) {
        printTree(root->children[i]);
    }
}

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter the data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    //How Many Children
    int n;
    cout<<"Enter No of Children "<<rootData<<endl;
    cin>>n;

    for (int i=1; i <=n ; i++) {
        TreeNode<int>* child =takeInput();
        root->children.push_back(child);
    }
    return root;
}

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter the root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);

    while (!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();
        cout<<"No of Children of: "<<f->data<<endl;
        int n;
        cin>>n;

        for (int i = 1; i <= n; i++) {
            int childData;
            cout<<"Enter "<<i<<" th child of"<<f->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }

    }
    return root;
}

void printTreeLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);
    while (!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<f->data<<": ";
        for (int i = 0; i < f->children.size(); ++i) {
            cout<<f->children[i]->data<<" ,";
        }
        cout<<endl;

        for (int i = 0; i < f->children.size(); ++i) {
            q.push(f->children[i]);
        }
    }
}

int countNodes(TreeNode<int>* root){
    if(root==NULL)
        return 0;
    int ans = 1;
    for (int i = 0; i < root->children.size(); ++i) {
        ans+= countNodes(root->children[i]);
    }
    return ans;
}

int heightOfTree(TreeNode<int>* root){
    if(root==NULL)
        return 0;
    int mx = 0;
    for (int i = 0; i < root->children.size(); ++i) {
//        int childHeight = heightOfTree(root->children[i]);
//        if(childHeight > max){
//            max = childHeight;
//        }
    mx = max(mx, heightOfTree(root->children[i]));
    }
    return mx+1;
}

void printAtLevelK(TreeNode<int> * root, int k){
    if (root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for (int i = 0; i < root->children.size(); i++) {
        printAtLevelK(root->children[i],k-1);
    }
}

int countLeafNodes(TreeNode<int> * root){
    if(root==NULL){
        return -1;
    }
    if (root->children.size()==0){
        return 1;
    }
    int ans =0;
    for(int i=0;i<root->children.size();i++){
        ans+= countLeafNodes(root->children[i]);
    }
    return ans;
}

void preOrderTraversal(TreeNode<int> * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for (int i = 0; i < root->children.size(); i++) {
        preOrderTraversal(root->children[i]);
    }
}

void postOrderTraversal(TreeNode<int> * root){
    if(root==NULL){
        return;
    }
    for (int i = 0; i < root->children.size(); i++) {
        preOrderTraversal(root->children[i]);
        cout<<root->data<<" ";
    }
}

void deleteTree(TreeNode<int> * root){
    if(root==NULL){
        return;
    }
    for (int i = 0; i < root->children.size(); i++) {
        deleteTree(root->children[i]);
    }
    delete root;
}

int main() {

    /*
    TreeNode<int> *root= new TreeNode<int>(1);
    TreeNode<int> *n1= new TreeNode<int>(2);
    TreeNode<int> *n2= new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
    */

    TreeNode<int> *root = takeInputLevelWise();

    printTreeLevelWise(root);
    preOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
//  cout<<countNodes(root)<<endl;
//    printAtLevelK(root,1);
//    cout<<countLeafNodes(root)<<endl;


    return 0;
}
