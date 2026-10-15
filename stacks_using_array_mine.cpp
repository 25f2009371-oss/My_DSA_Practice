#include <iostream>
using namespace std;


class Stack{
int *arr;
int top;
int size;
public:
//constructor
Stack(int s){
    size=s;
    top=-1;
    arr=new int[s];
}

void push(int val){
    if(top==size-1){
        cout<<"Stack overflow \n";
    }
    else{
    top++;
    arr[top]=val;
    cout<<"Pushed \n";
}};

void pop(){
if(top==-1){
    cout<<"Stack underflow \n";
return;
}

else{
    top--;
    cout<<"Popped \n";

return;}
}

int peek(){

    if(top==-1){
        cout<<"Empty";
        return -1;
    }
    
    return arr[top];

}

};

int main(){

Stack s1(5);
s1.push(10);
s1.push(4);
s1.push(-1);
s1.push(6);
s1.pop();
cout<<s1.peek();



}