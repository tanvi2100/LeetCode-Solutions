/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    struct cmp{
        bool operator()(ListNode *a , ListNode *b){
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& a) {
        int k = a.size();
        priority_queue <ListNode*,vector<ListNode*>,cmp>pq;
        for(int i=0;i<k;i++){
              if(a[i]!=0){
                  pq.push(a[i]);
              }
        }
        if(pq.empty()){
             return 0;
        }
        ListNode *dummy = new ListNode(0);
        ListNode *last = dummy;
        while(!pq.empty()){
              ListNode *curr = pq.top();
              pq.pop();
              last->next = curr;
              last = last->next;
              if(curr->next!=0){
                  pq.push(curr->next);
              }
        }
        return (dummy->next);
    }
};
