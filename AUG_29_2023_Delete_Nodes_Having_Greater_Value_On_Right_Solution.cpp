#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(!head || !(head->next)) return head;
        Node* cur = head;
        Node* prev = NULL;
        Node* next;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        cur = prev;
        while(cur->next){
            if(cur->next->data < cur->data){
                cur->next = cur->next->next;
            }
            else cur = cur->next;
        }
        cur = prev;
        prev = NULL;
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    
};