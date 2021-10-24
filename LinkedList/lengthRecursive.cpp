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
    cout<<"NULL"<<endl;
}

//length
int length(Node *head) {
    if(head == NULL) return 0;
    int smallAns = length(head->next);
    return 1+smallAns;
}

//taking input
Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node* n = new Node(data);
        //first Node
        if(head == NULL){
            head = n;
            tail = n;
        }
        //adding nodes after first
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
    cout<<length(head);
    return 0;
}
