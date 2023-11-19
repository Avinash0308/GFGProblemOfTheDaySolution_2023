#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* ans = NULL, *h = NULL, *a = head1, *b = head2;
        while(a && b){
            if(a->data == b->data){
                if(ans == NULL){
                    ans = new Node(a->data);
                    h = ans;
                }
                else{
                    h->next = new Node(a->data);
                    h = h->next;
                }
                a = a->next;
                b = b->next;
            }
            else if(a->data > b->data){
                b = b->next;
            }
            else a = a->next;
        }
        return ans;
    }
};