#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class stack{
    Node *head;
    int size;
public:
    stack(){
        head=NULL;
        size = 0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(int ele){
        Node *n = new Node(ele);
        n->next=head;
        head=n;
        size++;
    }
    void pop(){
        if (isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        size--;
    }
    int top(){
        if (isEmpty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }

};

int main(){
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout<<s1.top()<<endl;
    s1.pop();

    cout<<s1.top()<<endl;
    s1.pop();

    cout<<s1.top()<<endl;
    s1.pop();

    cout<<s1.isEmpty()<<endl;

return 0;
}
