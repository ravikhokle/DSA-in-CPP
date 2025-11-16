#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int num){
        data = num;
        next = NULL;
    }
};

int main(){

     Node* Head = NULL;

    int arr[] = {10,20,30,40,50};

    for(int i=0; i<5; i++){

    if(Head==NULL){
        Head = new Node(arr[i]);
    }else{
        Node* temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
    }
}

Node* temp= Head;

while (temp!=NULL)
{
    cout<<temp->data<< " ";
    temp=temp->next;
};

    return 0;
}