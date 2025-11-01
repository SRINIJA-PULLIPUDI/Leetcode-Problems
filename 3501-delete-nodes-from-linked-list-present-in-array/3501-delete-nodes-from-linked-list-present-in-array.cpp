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
    ListNode* modifiedList(vector<int>& n, ListNode* head) {
        set<int> nums;
        for(int i=0;i<n.size();i++){
            nums.insert(n[i]);
        }
        while(nums.find(head->val)!=nums.end() and head!=nullptr){
            head = head->next;
        }
        if(head==nullptr) return nullptr;
        ListNode* t = head;
        while(t->next != nullptr){
            if(nums.find(t->next->val)!=nums.end()){
                t->next = t->next->next;
            }
            else t = t->next;
        }
        return head;
    }
};