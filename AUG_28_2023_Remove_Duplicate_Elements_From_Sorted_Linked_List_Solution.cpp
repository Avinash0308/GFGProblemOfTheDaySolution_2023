#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(!head || !(head->next)) return head;
 Node* cur = head;
 while(cur->next){
     if(cur->next->data == cur->data) cur->next = cur->next->next;
     else cur = cur->next;
 }
 return head;
}