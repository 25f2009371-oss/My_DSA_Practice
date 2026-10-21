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
public:
int size;
Node *top;


Stack(){
size=0;
top=NULL;

}


void push(int val){
Node *temp=new Node(val);
temp->next=top;
top=temp;
cout<<"Success pushed"<<endl;
}
//val->null



void pop(){

if(top==NULL){
    cout<<"Stack underflow"<<endl;
}
else{

Node *temp=top;
top=top->next;
delete temp;
}}

void peek(){
if(top==NULL){
    cout<<"Stack empty"<<endl;
}
else{
    cout<<top->data<<endl;
}
}

};


int main(){
Stack s1;
s1.push(5);
s1.pop();
s1.peek();



}