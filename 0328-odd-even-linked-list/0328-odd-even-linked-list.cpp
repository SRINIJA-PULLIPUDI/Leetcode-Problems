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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr) return nullptr;
        if(head->next == nullptr) return head;
        if(head->next->next==nullptr) return head;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        ListNode* temp = head->next;
        ListNode* t = head->next->next;
        int f=0;
        while(t!=nullptr){
            if(f==0){
                t1->next = t;
                t1 = t1->next;
                f = 1;
            }else{
                t2->next = t;
                t2 = t2->next;
                f = 0;
            }
            cout<<t->val;
            t = t->next;
        }
        t2->next = nullptr;
        t1->next = temp;
        return head;
    }
};