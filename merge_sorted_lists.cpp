/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ret = new ListNode(0);
        ListNode* cur = ret;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                cur->next = l1;
                l1 = l1->next;
            } else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l2 != NULL) l1 = l2;
        while(l1 != NULL){
            cur->next = l1;
            l1 = l1->next;
            cur = cur->next;
        }
        return ret->next;
    }
};
