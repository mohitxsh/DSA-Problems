#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int nextIndex;
    int capacity;
public:
    Stack(){
        capacity = 4;
        arr = new int[capacity];
        nextIndex = 0;
    }
    Stack(int cap){
        capacity = cap;
        arr = new int[capacity];
        nextIndex = 0;
    }
    //size
    int size(){
        return nextIndex;
    }
    //check if stack is empty
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }else return false;
    }
    //push function
    void push(int ele){
        if(nextIndex == capacity){
            cout<<"stack full"<<endl;
            return;
        }
        arr[nextIndex] = ele;
        nextIndex++;
    }
    //pop function
    void pop(){
        if(isEmpty()){
            cout<<"stack empty"<<endl;
            return;
        }
        nextIndex--;
    }
    //top function
    int top(){
        if(isEmpty()){
            cout<<"stack empty"<<endl;
            return -1;
        }
        return arr[nextIndex-1];
    }
};

int main() {
    Stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}
