#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }

} *head;

class Solution
{
public:
    struct node *reverse(struct node *head, int k)
    {
        int size = 0;
        node *h = head;
        while (h)
        {
            size++;
            h = h->next;
        }
        int c = (size + k - 1) / k;
        h = head;
        node *next = NULL;
        node *fin = NULL;
        node *last = NULL;
        while (c--)
        {
            node *start = h;
            node *prev = NULL;
            int z = k;
            while (z-- && h)
            {
                next = h->next;
                h->next = prev;
                prev = h;
                h = next;
            }
            if (fin == NULL)
                fin = prev;
            if (last)
                last->next = prev;
            start->next = h;
            last = start;
        }
        return fin;
    }
};