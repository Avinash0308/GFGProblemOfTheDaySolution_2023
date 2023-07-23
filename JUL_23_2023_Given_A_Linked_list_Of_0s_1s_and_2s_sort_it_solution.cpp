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
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        vector<int> v(3);
        Node* h = head;
        while(h){
            v[h->data]++;
            h = h->next;
        }
        Node* ans = NULL;
        h = NULL;
        while(v[0]--){
            if(h){
                h->next = new Node(0);
                h = h->next;
            }
            else{
                ans = new Node(0);
                h = ans;
            }
        }
        while(v[1]--){
            if(h){
                h->next = new Node(1);
                h = h->next;
            }
            else{
                ans = new Node(1);
                h = ans;
            }
        }
        while(v[2]--){
            if(h){
                h->next = new Node(2);
                h = h->next;
            }
            else{
                ans = new Node(2);
                h = ans;
            }
        }
        return ans;
    }
};