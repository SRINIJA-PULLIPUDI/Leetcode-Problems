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
    ListNode* sortList(ListNode* head) {
        vector<int> a;
        ListNode *n = head;
        ListNode *t = head;
        while(n!=NULL){
            a.push_back(n->val);
            n=n->next;
        }
        sort(a.begin(), a.end());
        int c = 0;
        while(t!=NULL){
            t->val = a[c];
            c++;
            t = t->next;
        }
        return head;
    }
};