/*****************************************************************
Name : 
Date : 2017/02/19
By   : Username
Final: 2017/02/19
*****************************************************************/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

size_t len(Node* head){
    size_t lenth=1;
    Node* a=head;
    while(a->next!=NULL){
        a=a->next;
        lenth++;
    }
    return lenth;
}

Node* at(Node* head,size_t idx){
    Node* temp=head;
    for(unsigned i = 0; i < idx; ++i) {
        temp=temp->next;
    }
    return temp;
}

void pri(Node* head,size_t idx){
    cout<<at(head,idx)->data<<" ,";
}

void pri_all(Node* head);
/*==============================================================*/
int main(int argc, char const *argv[]){
    Node n[3];
    n[0].data=1;    
    n[1].data=2;    
    n[2].data=3;
    n[0].next=&n[1];    
    n[1].next=&n[2];    
    n[2].next=nullptr;    

    Node* head=&n[0];
    // cout << head->next->data <<endl;

    Node n2;
    n2.data=4;
    Node* a=head->next;
    head->next=&n2;
    n2.next=a;

    pri_all(head);

    // pri(head,0);
    // pri(head,1);
    // pri(head,2);
    // pri(head,3);

    // cout << head->data <<" ,";
    // cout << head->next->data <<" ,";
    // cout << head->next->next->data <<" ,";
    // cout << head->next->next->next->data <<" ,";

    Node* temp;
    temp=at(head,1);
    at(head,0)->next=at(head,2);
    temp->next=at(head,2);
    at(head,1)->next=temp;

    pri_all(head);

    return 0;
}
/*==============================================================*/

void pri_all(Node* head){
    size_t l=len(head);
    for(unsigned i = 0; i < l; ++i) {
        pri(head,i);
    }
    cout<<endl;
}