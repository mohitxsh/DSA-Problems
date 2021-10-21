#include<iostream>
using namespace std;

class DynamicArray{
    int* data;
    int nextIndex;
    int capacity;
public:
    DynamicArray() {
        data = new int[5];
        nextIndex=0;
        capacity=5;
    }
    DynamicArray(const DynamicArray &d) {
        this->nextIndex = d.nextIndex;
        this ->capacity = d.capacity;
        this->data = new int[d.capacity];
        for(int i=0;i<nextIndex;i++) {
            data[i] = d.data[i];
        }
    }
    void add(int element) {
        if(nextIndex==capacity) {
            int *newData = new int[capacity*2];
            for(int i=0;i<capacity;i++) {
                newData[i] = data[i];
            }
            capacity = capacity*2;
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    void add(int pos, int element) {
        if(pos<nextIndex) {
            data[pos] = element;
        }else return;
    }
    void print() {
        for(int i=0;i<nextIndex;i++) {
            cout<<data[i]<<endl;
        }
    }
    int getCapacity() {
        return capacity;
    }
};

int main() {
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
    cout<<d1.getCapacity()<<endl;
    cout<<"--------copy constructor---------"<<endl;
    DynamicArray d2(d1);
    d1.add(0,100);
    d1.print();
    cout<<"--------------------------"<<endl;
    d2.print();
    return 0;
}
