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


class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* n = new Node(data);
        if(!head || head->data >= data){
            n->next = head;
            return n;
        }
        Node* h = head;
        while(h->next && h->next->data < data){
            h = h->next;
        }
        Node* next = h->next;
        h->next = n;
        n->next = next;
        return head;
    }
};