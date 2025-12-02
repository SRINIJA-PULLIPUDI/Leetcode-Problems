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
        if(head==nullptr) return nullptr;
        map<ListNode*, int> mp;
        ListNode * t = head;
        while(t!=nullptr){
            if(mp[t]){
                return t;
            }else{
                mp[t]++;
            }
            t = t->next;
        }
        return nullptr;
    }
};