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
void length(Node *head) {
    Node *temp = head;
    int count;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    cout<<count;
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
            Node *temp = head;
            head = n;
            head->next = temp;
        }
        cin>>data;
    }
    return head;
}

int main(){
    Node *head = takeInput();
    length(head);
    return 0;
}

