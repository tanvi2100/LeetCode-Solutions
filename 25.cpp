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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        for(int i=0;i<k;i++){
            if(temp==0){
                return head;
            }
            temp = temp->next;
        }
        ListNode *prev, *curr, *nextnode;
        prev = 0;
        curr = nextnode = head;
        for(int i=0;i<k;i++){
            nextnode = nextnode->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        if(nextnode!=0){
            head->next = reverseKGroup(nextnode,k);
        }
        return prev;
    }
};
