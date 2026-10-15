#include <iostream>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int val){
data=val;
next=NULL;
}
};

class Stack{

int size;
Node *top;

public:
Stack(){
    top=NULL;
    size=0;
}



void push(int val){
    Node *temp=new Node(val);
    temp->next=NULL;
    top=temp;
    size++;}


void pop(){
if(top==NULL){
cout<<"Stack underflow"<<endl;
return;
}

else{

Node *temp=top;
top=top->next;

delete temp;
}
}



int peek(){
if(top==NULL){
    return -1;
}

else{

    return top->data;
}


}

};