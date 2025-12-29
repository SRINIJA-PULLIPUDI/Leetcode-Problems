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
struct Compare{
    bool operator()(ListNode* const&p1, ListNode* const&p2){
        return p1->val > p2->val;
    }
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]) pq.push(lists[i]);
        }
        ListNode *res = new ListNode(0);
        ListNode *t = res;
        while(!pq.empty()){
            ListNode* n = pq.top();
            pq.pop();
            t->next = n;
            t = t->next;
            if(n->next!=nullptr) pq.push(n->next);
        }
        return res->next;
    }
};