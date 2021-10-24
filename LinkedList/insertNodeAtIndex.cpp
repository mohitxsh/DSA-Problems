#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

//print
void print(Node* head){
    Node *temp;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//create linkedList
Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }
        if(head != NULL){
            tail->next = n;
            tail = n;
        }
    cin>>data;
    }
    return head;
}

//insert new node
Node* insert(Node* head, int data, int index){
    int c = 1;
    Node *temp = head;
    while(temp != NULL){
        c++;
        temp = temp->next;
        if(c == index){
            Node *n = new Node(data);
            Node *p = temp->next;
            temp->next = n;
            temp = n;
            temp->next = p;
            break;
        }
    }
    //print with new node inserted
    print(head);
}

int main(){
    Node *h = takeInput();
    print(h);
    insert(h, 100, 2); //insert data 100 at index 2
    return 0;
}
