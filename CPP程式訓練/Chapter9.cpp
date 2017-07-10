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
            cout << "姓名：" << head->name << " ";
            cout << "學號：" << head->number << " ";
            cout << "成績：" << head->fraction << endl;
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

//找尾巴
Node* tail(Node* head){
    while(head->next != NULL) 
        head = head->next;
    return head;
}

Node* input(Node* head){
    Node* a = new Node;
    cout << "請輸入姓名、學號、成績" << endl;
    cin >> a->name >> a->number >> a->fraction;
    head=tail(head);
    head->next = a;
    a->next = NULL;
    cout << "新增成功！" <<endl;
    return head;
}



void start(Node* head){
    int c = 1;
    while(c != 0) {
        cout << "新增資料 >>> 請輸入1" << endl;
        cout << "刪除資料 >>> 請輸入2" << endl;
        cout << "顯示資料 >>> 請輸入3" << endl;
        cout << "離開程式 >>> 請輸入0" << endl;
        cin >> c;   
    if(c == 1){
        input(head);
    }
    else if(c == 2){
        cout << "請輸入欲刪除之學號：" << endl;
        
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