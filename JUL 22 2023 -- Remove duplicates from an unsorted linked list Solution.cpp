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


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_map<int,int> m;
        Node* ans = head;
        if(head == NULL || head->next == NULL) return head;
        m[head->data]++;
        while(head->next){
            int val = head->next->data;
            if(m.find(val) != m.end()){
                head->next = head->next->next;
            }
            else {m[val]++;head = head->next;}
        }
        return ans;
    }
};
int main(){
    return 0;
}