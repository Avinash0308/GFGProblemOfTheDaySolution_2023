class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // NOTE :- This is not good approach to solve the problem because it destroys the data of original string;
        Node * h = head1; // storing the address of node head1 just to keep secure the node;
        while(head1 != NULL){ // then traverse the first node until it is not null;
            head1->data -= 2002; // and subtract data of each node by 2002  , this is done to assure that current node is traversed , by reducing data of node by 2002 we can make sure that at max the val will remain -1001 because it is given in constraints that at max val can be 1000;
            head1 = head1->next; // moving to next node;
        }
        while(head2 != NULL && head2->data > -1001){ // now we will traverse the second node until it is not null or its data is greater than -1001 , if it's data is less than -1001 it means that current node is traversed thus this is the intersection point of both the nodes;
            head2 = head2->next; // moving to next node;
        }
        if(head2 == NULL) return -1; // if head2 reaches the null node , it means that both the ll are not intersecting so return -1;
        return head2->data + 2002; // else add 2002 to current node's data and return it;
        
    }
};
