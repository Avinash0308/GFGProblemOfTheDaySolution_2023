struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head || !head->next) return head;
        Node* h = head;
        Node* prev = NULL;
        Node* next;
        Node* ans = h->next;
        while(h && h->next){
            next = h->next;
            h->next = h->next->next;
            if(prev) prev->next = next;
            next->next = h;
            prev = h;
            h = h->next;
        }
        return ans;
    }
};