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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode* result = new ListNode(0);
        ListNode* res = result;
        ListNode* temp = head->next;
        while(temp){
            if(temp->val==0){
                if(res->val==0){
                    res->val = sum;
                }
                else{
                    ListNode *n = new ListNode(sum);
                    res->next = n;
                    res = res->next;
                }
                sum=0;
            }else{
                sum+=temp->val;
            }
            temp = temp->next;
        }
        return result;
    }
};