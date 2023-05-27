struct Node* modifyTheList(struct Node *head)
    {
     vector<int> v;
     while(head){
         v.push_back(head->data);
         head=head->next;
     }
     int left=0,right=v.size()-1;
     while(left<right){
         int temp=v[left];
         v[left]=v[right]-v[left];
         v[right]=temp;
         left++;
         right--;
     }
     struct Node * l1=new Node(v[0]);
     struct Node * ans=l1;
     for(int i=1;i<v.size();i++){
         struct Node *next=new Node(v[i]);
         l1->next=next;
         l1=l1->next;
     }
     return ans;
    }
