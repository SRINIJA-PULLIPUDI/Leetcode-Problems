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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr) return head;
        if((head->next) and head->next->next==nullptr) return nullptr;
        ListNode *slow = head;
        ListNode *fast = head;
        int flag=0;
        while((fast!=nullptr and fast->next!=nullptr) or slow!=fast){
            if(fast==nullptr or fast->next==nullptr or fast->next->next==nullptr) return nullptr;
            if(flag==0){
                slow = slow->next;
                fast = fast->next->next;
            }else{
                slow = slow->next;
                fast = fast->next;
            }
            if(slow==fast){
                if(slow == head) return head;
                if(flag==0){
                    slow = head;
                    flag=1;
                }else if(flag==1){
                    return slow;
                }
            }
        }
        return nullptr;
    }
};