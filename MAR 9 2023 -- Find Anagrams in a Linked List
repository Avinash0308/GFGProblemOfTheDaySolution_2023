class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        vector<Node*> ans;
        int n = s.size();
        if(head == NULL) return {};
        vector<int> s_count(26);
        for(int i = 0; i<n; i++){
            s_count[s[i]-'a']++;
        }
        Node * h = head;
        Node * prev = head;
        vector<int> N_count(26);
        int val = 0;
        while(h){
            while(val != n && h){
                N_count[h->data - 'a']++;
                val++;
                h = h->next;
            }
            if(N_count == s_count){
                ans.push_back(prev);
                Node * cur = prev;
                prev = h;
                while(cur->next != h){
                    cur = cur->next;
                }
                cur->next = NULL;
                for(int i = 0; i<26; i++){
                    N_count[i] = 0;
                }
                val = 0;
            }
            else{
                N_count[prev->data - 'a']--;
                prev = prev->next;
                val--;
            }
        }
        return ans;
    }
};
