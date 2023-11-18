#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
        if(head == NULL) return NULL;
        Node* cur = head;
        Node* prev = NULL;
        Node* next;
        while(cur){
            next = cur->next;
            cur->next = prev;
            cur->prev = next;
            prev = cur;
            cur = next;
            
        }
        return prev;
    }
    
};