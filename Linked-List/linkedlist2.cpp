#include<iostream>
using namespace std;


class Node{

public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

};

void print(Node *head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }


}

int main(){
    //Static allocation
    Node n1(1);
    Node n2(2);
    Node n3(7);
    Node n4(11);
    Node n5(25);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    Node *head = &n1;
    print(head);
    /*
    cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<" "<<n4.data<<endl;

    Node *head = &n1;

    cout<<head->data<<endl;*/
    return 0;
}

