#include <iostream>
using namespace std;


class Node{
    public:

int data;
Node *next;
Node(int val){
    data=val;
    next=NULL;
}};


class Stack{
int size;
Node *top;
public:
Stack(){
top=NULL;
size=0;}

void push(int val){
Node *temp=new Node(val);
temp->next=top;
top=temp;
size++;
return ;
}

void pop(){
    if(top==NULL){
        cout<<"Stack underflow \n";
    }
    else{
Node *temp=top;
top=top->next;
delete temp;
size--;
return ;}
}

void peek(){
if (top==NULL){
    cout<<"Stack is empty";
}

else{
    cout<<top->data<<endl;
}

}


};


int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();  // Output: 30

    s.pop();

    s.peek();  // Output: 20

    s.pop();
    s.pop();
    s.pop();   // Stack underflow

    return 0;
}
