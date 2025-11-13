#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head;

void insert(int val){
    node* newnode = new node();
    newnode->data = val;
    newnode->next = nullptr;

    if(head == nullptr){
        head = newnode;
    } else {
        node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void print(){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    head = nullptr;
    insert(10);
    insert(20);
    insert(30);
    print();
    return 0;
}