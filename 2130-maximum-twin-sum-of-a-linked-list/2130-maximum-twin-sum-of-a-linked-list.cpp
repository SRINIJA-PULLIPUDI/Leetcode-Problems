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
    int pairSum(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        vector<int> v;
        while(temp2 and temp2->next){
            v.push_back(temp1->val);
            temp1 = temp1->next;
            temp2 = temp2->next->next;
        }
        int k = v.size()-1,res = 0;
        while(temp1!=nullptr){
            res = max(res, temp1->val+v[k]);
            k--;
            temp1 = temp1->next;
        }return res;
    }
};