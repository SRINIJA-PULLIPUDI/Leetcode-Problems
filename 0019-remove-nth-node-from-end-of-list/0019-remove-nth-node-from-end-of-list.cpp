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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==1 and head->next==nullptr) return nullptr;
        ListNode* t1 = head;
        ListNode* t2 = head;
        int c=0;
        while(c<n){
            c++;
            t1 = t1->next;
        }
        if(t1==nullptr){
            head = head->next;
            return head;
        }
        while(t1->next!=nullptr){
            t1 = t1->next;
            t2 = t2->next;
        }
        t2 ->next = t2->next->next;
        // cout
        return head;
    }
};