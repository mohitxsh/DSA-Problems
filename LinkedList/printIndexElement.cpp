#include<bits/stdc++.h>
using namespace std;
//defining Node Class
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

//print function
void printPos(Node *head) {
    int pos;
    cout<<"Enter index:"<<endl;
    cin>>pos;
    Node *temp = head;
    int count = -1;
    while(temp != NULL){
        count++;
        if(count == pos){
            cout<<temp->data<<endl;
        }
        temp=temp->next;
    }
}

//taking input function return head
Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node* n = new Node(data);
        //first LL
        if(head == NULL){
            head = n;
            tail = n;
        }
        //if not first
        else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

int main(){
    Node *head = takeInput();
    printPos(head);
    return 0;
}
