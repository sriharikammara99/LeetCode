class Solution {
public:
    void reorderList(ListNode* h) {
        vector<ListNode*> v; for(;h;h=h->next)v.push_back(h);
        int i=0,j=v.size()-1; while(i<j){v[i]->next=v[j]; if(++i==j)break; v[j]->next=v[i]; j--;} v[i]->next=nullptr;
    }
};