/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    void next(vector<int> &a, int &j, int n){
        while(j<n-1 && a[j] == a[j+1])j++;
    }
    void insert(int val, Node* &ans, Node* &head){
        if(head == NULL){
            ans = new Node(val);
            head = ans;
        }
        else{
            head->next = new Node(val);
            head = head->next;
        }
    }
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        vector<int> a, b;
        
        while(head1){
            a.push_back(head1->data);
            head1 = head1->next;
        }
        while(head2){
            b.push_back(head2->data);
            head2 = head2->next;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i = 0, j = 0;
        Node* head = NULL, *ans = NULL;
        int n = a.size(), m = b.size();
        while(i<n && j<m){
            next(a,i,n);
            next(b,j,m);
            if(a[i] == b[j]){
                insert(a[i],ans,head);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                insert(a[i],ans,head);
                i++;
            }
            else{
                insert(b[j],ans,head);
                j++;
            }
        }
        while(i<n){
            next(a,i,n);
            insert(a[i],ans,head);
            i++;
        }
        while(j<m){
            next(b,j,m);
            insert(b[j],ans,head);
            j++;
        }
        return ans;
    }
};
