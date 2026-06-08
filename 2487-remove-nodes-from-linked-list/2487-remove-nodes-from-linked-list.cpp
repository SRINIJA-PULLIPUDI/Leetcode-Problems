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
    ListNode* reverse(ListNode* head){
        ListNode *prev = nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head->next==nullptr) return head;
        ListNode *rev = reverse(head);
        ListNode *res = new ListNode(0);
        ListNode *temp = res;
        ListNode *curr = rev;
        while(curr){
            if(temp->val==0) {
                temp->val = curr->val;
                temp->next = nullptr;
                curr = curr->next;
            }
            else if(curr->val >= temp->val){
                ListNode* next = curr->next;
                curr->next = nullptr;
                temp->next = curr;
                temp = temp->next;
                curr = next;
            }else curr = curr->next;
        }
        return reverse(res);
    }
};