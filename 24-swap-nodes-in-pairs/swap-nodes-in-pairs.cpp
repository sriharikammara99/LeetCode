class Solution {
public:
    ListNode* swapPairs(ListNode* h) {
        if(!h || !h->next) return h;
        ListNode* n=h->next; h->next=swapPairs(n->next); n->next=h;
        return n;
    }
};