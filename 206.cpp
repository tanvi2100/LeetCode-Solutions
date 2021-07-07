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

// Solution 1

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==0 || head->next==0){
            return head;
        }
        ListNode* temp;
        temp = reverseList(head->next);
        head->next->next = head;
        head->next = 0;
        return(temp);
    }
};

// Solution 2

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev,*nextnode,*curr;
        prev = 0;
        curr = nextnode = head;
        while(nextnode!=0){
            nextnode = nextnode->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        head = prev;
        return head;
    }
};
