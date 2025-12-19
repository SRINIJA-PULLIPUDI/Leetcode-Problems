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
    bool isPalindrome(ListNode* head) {
        struct ListNode *t,*r=NULL,*m;
        t=head;
        while(t!=NULL)
        {
            m=(struct ListNode *)malloc(sizeof(struct ListNode));
            m->val=t->val;
            m->next=NULL;
            if(r==NULL)
            {
                r=m;
            }
            else 
            {
                m->next=r;
                r=m;
            }
            t=t->next;
        }
        t=head;
        while(t!=NULL)
        {
            if(t->val!=r->val) return 0;
            t=t->next;
            r=r->next;
        }
        return 1;
    }
};