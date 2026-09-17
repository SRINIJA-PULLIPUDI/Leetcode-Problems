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
    void reorderList(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while(fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* back = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(back){
            ListNode* nxt = back->next;
            back->next = prev;
            prev = back;
            back = nxt;
        }
        ListNode* st = head, *en = prev;
        while(st and en){
            ListNode* temp1 = st->next, *temp2 = en->next;
            st->next = en;
            en->next = temp1;
            st = temp1;
            en = temp2;
        }
    }
};