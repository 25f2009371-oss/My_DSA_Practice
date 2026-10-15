#include <iostream>
using namespace std;

class Stack{
int *arr;
int top;
int size;
//constructor
public:
Stack(int s){
size=s;
arr=new int[s];
top=-1;
}

//push
void push(int val){
if(top==size-1){
    cout<<"Stack overflow";
    return;
}
else{
    top++;
    arr[top]=val;
    cout<<"Pushed succefully"<<endl;
}}


//pop

void pop(){
if(top==-1){
    cout<<"stack underflow";
    return;
}
else{
    top--;
}}


//peek

void peek(){

    if(top==-1){
        cout<<"Empty";
        return ;
    }
    else{
    cout<<arr[top];
    return;}
}



//isempty
bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}


};



int main(){

Stack s1(5);
s1.push(5);
s1.push(6);
s1.push(7);
s1.peek();


}