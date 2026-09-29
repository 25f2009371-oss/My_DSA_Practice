//C++ program to insert the node at beginning of 
//linked list
#include <iostream>
using namespace std;


struct Node{
int data;
Node* next;

Node(int new_data){
    data=new_data;
    next=nullptr;
}
};
Node* insertAtFront(Node* head, int new_data){
Node* new_node=new Node(new_data);
new_node->next=head;
return new_node;
}








