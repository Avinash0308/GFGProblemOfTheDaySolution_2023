class Solution{
public:
    Node *primeList(Node *head){
        Node * h = head;
        while(h != NULL){
            int x = h->val;
            if(x == 1){
                h->val = 2;
                continue;
            }
            int i = 0;
            while(x-i > 1){
                int flag = 1;
                int z= sqrt(x-i);
                for(int j = 2; j<=z;j++){
                    if((x-i)%j == 0){
                        flag = 0;
                        break;
                    }
                }
                if(flag){
                    h->val = x-i;
                    i = x;
                    break;
                }
                else{
                    flag= 1;
                    z = sqrt(x+i);
                    for(int j = 2; j<=z; j++){
                        if((x+i)%j == 0){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag){
                        h->val = x+i;
                        i = x;
                        break;
                    }
                }
                i++;
            }
            h = h->next;
        }
        return head;
    }
};
