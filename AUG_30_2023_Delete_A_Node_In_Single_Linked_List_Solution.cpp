#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x == 1){
        head = head->next;
        return head;
    }
    x-=2;
    Node* cur = head;
    while(x--){
        cur = cur->next;
    }
    cur->next = cur->next->next;
    return head;
}