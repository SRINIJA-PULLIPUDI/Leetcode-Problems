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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t = l1;
        ListNode *t2 = l2;
        int carry = 0;
        while(t->next!=nullptr and t2->next!=nullptr){
            int x = t->val + t2->val + carry;
            t->val = x%10;
            carry = x/10;
            t = t->next;
            t2 = t2->next;
        }
        cout<<t->val<<" "<<t2->val<<" "<<carry<<endl;
        int x = t->val + t2->val + carry;
        t->val = x%10;
        carry = x/10;
        cout<<t->val;
        if(t->next==nullptr and t2->next==nullptr){
            ListNode* n = new ListNode(carry);
            if(carry!=0) t->next = n;
            return l1; 
        }
        else if(t->next==nullptr) t->next = t2->next;
        t = t->next;
        while(t->next!=nullptr){
            int x = t->val + carry;
            t->val = x%10;
            carry = x/10;
            t = t->next;
        }
        int y = t->val + carry;
        t->val = y%10;
        carry = y/10;
        ListNode* n = new ListNode(carry);
        if(n->val!=0) t->next = n;
        return l1;
    }
};