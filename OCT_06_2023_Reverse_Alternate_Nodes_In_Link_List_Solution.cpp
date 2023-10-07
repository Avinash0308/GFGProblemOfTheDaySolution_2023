#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    void rearrange(struct Node *odd)
    {
        // add code here
        if (odd == NULL || odd->next == NULL)
            return;

        Node *a = odd;

        Node *b = odd->next;

        Node *tem = b;

        while (b && b->next)
        {
            a->next = b->next;

            a = a->next;
            b->next = b->next->next;
            if (b->next)
                b = b->next;
        }
        a->next = NULL;
        Node *prev = NULL;

        Node *next = NULL;

        b = tem;

        while (b)
        {

            next = b->next;

            b->next = prev;

            prev = b;
            b = next;
        }
        a->next = prev;
        return;
    }
};