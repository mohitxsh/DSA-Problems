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
void print(Node *head) {
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
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
    print(head);
    return 0;
}
