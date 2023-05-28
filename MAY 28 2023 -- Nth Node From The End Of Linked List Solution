class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        Node* slow = head, *fast = head;
        int i = 0;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            i++;
        }
        int length;
        if(fast){
            length = i*2 + 1;
        }
        else{
            length = i*2;
        }
        if(n > length || n == 0) return -1;
        int ind = length-n + 1;
        int cur = i+1;
        if(cur <= ind){
            i = ind-cur;
            while(i--){
             slow = slow->next;
            }
            return slow->data;
        }
        else{
            slow = head;
            i = 1;
            while(i<ind){
                slow = slow->next;
                i++;
            }
            return slow->data;
        }
        return -1;
    }
};
