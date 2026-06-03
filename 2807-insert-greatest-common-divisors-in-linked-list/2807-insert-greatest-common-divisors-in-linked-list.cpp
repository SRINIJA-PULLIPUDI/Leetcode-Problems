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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return head;
        ListNode *temp = head;
        while(temp->next){
            int k = gcd(temp->val,temp->next->val);
            ListNode *n = new ListNode(k);
            ListNode* temp2 = temp->next;
            temp->next = n;
            n->next = temp2;
            temp = temp->next->next;
        }return head;
    }
};