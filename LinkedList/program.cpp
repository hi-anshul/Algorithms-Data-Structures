#include<bits/stdc++.h>
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

void print(Node *head){
	Node *temp = head;
    while(temp!=NULL)
    {
    	cout<<temp->data<<"->";
    	temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(Node *head){
    int count = 0;
    while (head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

Node *takeInput()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
    {
        Node *n= new Node(data);
        if (head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

Node *InsertingAtHead()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data!=-1)
    {
        Node *n = new Node(data);
        if (head==NULL){
            head = n;
            tail = n;
        }else{
            n->next=head;
            head=n;
        }
        cin>>data;
    }
    return head;
}

void printIthNode(Node *head, int index){
    if (index <0){
        cout<<-1<<endl;
        return;
    }
    int count=1;
    while (count<=index && head!=NULL){
        head=head->next;
        count++;
    }
    if (head){
        cout<<head->data<<endl;
    }else{
        cout<<-1<<endl;
    }
}

Node *insertAtIthPosition(Node *head, int index, int data)
{
    Node *temp = head;
    if(index<0 || index > length(head))
        return head;
    Node *n=new Node(data);
    int len = length(head)-1;
    if (index==len)
    {
        for (int i = 0; i < len; i++) {
            temp=temp->next;
        }
        temp->next=n;
        n->next=NULL;
    }else
    {
        for (int i = 0; i <index-1; i++) {
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }
}

Node *deleteAtIthpostion(Node *head, int index)
{

    if (index<0){
        cout<<-1<<endl;
        return head;
    }
    if (index==0 && head)
    {
        Node *newHead= head->next;
        head->next=NULL;
        delete head;
        return newHead;
    }

    int count =1;
    Node *curr = head;
    while(count<index && curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    if (curr && curr->next)
    {
        Node *temp = curr->next;
        curr->next=curr->next->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
    return head;

};

int RLength(Node *head){
    if(head==NULL)
        return 0;
    int smallAns = RLength(head->next);
    return 1+smallAns;
}

bool search(Node *head, int data)
{
    Node *curr=head;
    while(curr){
    if(data==curr->data)
        return true;
        curr=curr->next;
    }
    return false;
}
bool rSearch(Node *head, int data)
{
    if(head==NULL)
        return false;
    if (head->data==data) return true;

    return rSearch(head->next,data);

}

int midOfLL(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if (fast!=NULL)
    {
        return slow->next->data;
    }
    return slow->data;

}

Node *reverseLinkedList(Node *head)
{
    Node *prev=NULL;
    Node *curr = head;

    while(curr!=NULL){
        Node *n = curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    return prev;
}

Node *removeNthElement(Node *head, int n)
{
    Node *first= head;
    Node *second = head;

    while(n--)
    {
        second=second->next;
    }

    if(second==NULL)
    {
        return first->next;
    }

    while(second->next!=NULL)
    {
        first = first->next;
        second = second->next;
    }
    first->next=first->next->next;

    return head;
}


int main(){

//    Node n1(1);
//    Node n2(2);
//    Node n3(3);
//    Node n4(4);
//    Node n5(5);
//
//    Node *head = &n1;
//
//    n1.next=&n2;
//    n2.next=&n3;
//    n3.next=&n4;
//    n4.next=&n5;

    Node *head = takeInput();
//    Node *head2 = InsertingAtHead();

    print(head);
//    print(head2);
//    cout<<length(head)<<endl;
//    printIthNode(head,3);
//    insertAtIthPosition(head,5,50);
//    Node *head1= deleteAtIthpostion(head,0);
//    print(head1);
//    cout<<RLength(head);
//    cout<<midOfLL(head)<<endl;
//    Node *reverse = reverseLinkedList(head);
//    print(reverse);

    Node *newHead = removeNthElement(head,4);
    print(newHead);

return 0;
}