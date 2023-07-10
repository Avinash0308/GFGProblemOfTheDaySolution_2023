class Solution {
public:
    Node *flatten(Node *root)
    {
        // NOTE - I used merge sort to sort the given ll matrix but recursive method can also be used which have less lines of code;
        if(root == NULL || root->next == NULL)return root; // if root is null or the next to root is null we will return it as it is;
        while(root->next != NULL){ // this is the prior most loop which will iterate until the next to root is not null because we need to rearrange matrix to one column;
            Node * h = NULL; // this node will store the sorted linked list;
            Node * head = NULL; // this node will store head of the sorted ll (h);
            Node * a = root; // will be used to iterate through root ll ;
            Node * b = root->next; // will be used to iterate through ll next to root;
            Node * c = root->next->next; // will be used to assign new next value to root;
            a->next = NULL; // declairing root's next as null , so as to remove any mismatching in nodes;
            while(a && b){ // this loop will run until any of two nodes become null;
                if(a->data <= b->data){ // if a's data is smaller than b's;
                    if(h == NULL){ // if no node is yet assigned to h ;
                        h = a;
                        a = a->bottom; // a is moved to bottom of a;
                        head = h; // head is assigned top of sorted ll;
                    }
                    else{
                        h->bottom = a; // else h's bottom is assigned value of a;
                        h = h->bottom; // moving h to it's just assigned bottom;
                        a = a->bottom; // moving a to it's bottom;
                    }
                }
                else{ // if b's data is either greater or equal to a's data , repeating all above process taking b as the primary node;
                    if(h == NULL){
                        h = b;
                        b = b->bottom;
                        head = h;
                    }
                    else{
                        h->bottom = b;
                        b = b->bottom;
                        h = h->bottom;
                    }
                }
            }
            if(a)h->bottom = a; // if a is not null its value will be assigned to h's bottom;
            if(b)h->bottom = b; // else same goes for b;
            root = head; // root is assigned the head of sorted ll;
            root->next = c; // root's next has been assigned a new value c;
        }
        return root; // when all the respective ll is sorted to create a single ll the head of it is returned;
    }
};
