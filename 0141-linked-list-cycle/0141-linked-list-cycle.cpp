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
    bool hasCycle(ListNode *head) {
        if(head==nullptr) return false;
        ListNode *t1 = head;
        ListNode *t2 = head;
        while(t1->next!=nullptr and t2->next!=nullptr and t2->next->next!=nullptr){
            // cout<<t1->val<<" "<<t2->val<<endl;
            t1 = t1->next;
            t2 = t2->next->next;
            if(t1==t2){
                return true;
            }
        }
        return false;
    }
};