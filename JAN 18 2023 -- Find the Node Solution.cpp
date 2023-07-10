class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        if(!head) return -1; // if head is null return -1;
        Node * h = head; // slow pointer h;
        Node * n = head; // fast pointer n;
        while(n != NULL && n->next != NULL){ // while n or n->next is not null;
                h = h->next; // moving slow pointer with one node;
                n = n->next->next; // moving fast pointer by two node;
                if(h == n){ // if both the nodes are equal
                    h = head; // we will assign head to h;
                    while(h!=n){ // run loop while h is not equal to n;
                        h = h->next;
                        n = n->next;
                    }
                    return h->data; // point where they meet is required point , return data;
                }
        }
        return -1; // if head is null return -1;
    }
};
