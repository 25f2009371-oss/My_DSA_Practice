#include <iostream>
using namespace std;

class Stack{
int *arr;
int top;
int size;
public:
Stack(int s){
size=s;
top=-1;
arr=new int[size];
}


void push(int val){
    if(top==s-1){
        cout<<"Stack overflow";
    }
    else{
        top++;
        arr[top]=val;
    }
}
void pop(){
if(top==-1){
    cout<<"Stack underflow";
}
else{
    top--;
}
}



void peek(){

    if(top==-1){

cout<<"Stack empty";
    }

    else{
        cout<<arr[top];
    }
}};




int main(){






}