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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        set<ListNode*> s;
        while(temp!=nullptr){
            s.insert(temp);
            temp = temp->next;
        }
        ListNode *temp2 = headB;
        while(temp2!=nullptr){
            if(s.contains(temp2)) return temp2;
            temp2 = temp2->next;
        }
        return nullptr;
    }
};