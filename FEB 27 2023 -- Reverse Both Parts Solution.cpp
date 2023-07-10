class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        Node * h = head;
        Node * n = NULL;
        Node * prev = NULL;
        while(k--){
            n = h->next;
            h->next = prev;
            prev = h;
            h = n;
        }
        Node * ans = prev;
        prev = NULL;
        while(h != NULL){
            n = h->next;
            h->next = prev;
            prev = h;
            h = n;
        }
        head -> next = prev;
        return ans;
    }
};
