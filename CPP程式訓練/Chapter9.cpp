/*****************************************************************
Name : 
Date : 2017/04/14
By   : Username
Final: 2017/04/14
*****************************************************************/
#include <iostream>
using namespace std;

struct Node{
    char name[10];
    int number;
    int fraction;
    Node* next = NULL;
};

void priall(Node* head){
    while(head->next != NULL){
            head = head->next;
            cout << "�m�W�G" << head->name << " ";
            cout << "�Ǹ��G" << head->number << " ";
            cout << "���Z�G" << head->fraction << endl;
        }
}

size_t len(Node* head){
    size_t lenth=0;
    while(head->next != NULL){
            lenth++;
            head = head->next;
    }
    return lenth;
}

//�����
Node* tail(Node* head){
    while(head->next != NULL) 
        head = head->next;
    return head;
}

Node* input(Node* head){
    Node* a = new Node;
    cout << "�п�J�m�W�B�Ǹ��B���Z" << endl;
    cin >> a->name >> a->number >> a->fraction;
    head=tail(head);
    head->next = a;
    a->next = NULL;
    cout << "�s�W���\�I" <<endl;
    return head;
}



void start(Node* head){
    int c = 1;
    while(c != 0) {
        cout << "�s�W��� >>> �п�J1" << endl;
        cout << "�R����� >>> �п�J2" << endl;
        cout << "��ܸ�� >>> �п�J3" << endl;
        cout << "���}�{�� >>> �п�J0" << endl;
        cin >> c;   
    if(c == 1){
        input(head);
    }
    else if(c == 2){
        cout << "�п�J���R�����Ǹ��G" << endl;
        
    }
    else if(c == 3){
        priall(head);
    }
}
}
/*==============================================================*/
int main(int argc, char const *argv[]){
    Node* head = new Node;

    start(head);
    return 0;
}
/*==============================================================*/