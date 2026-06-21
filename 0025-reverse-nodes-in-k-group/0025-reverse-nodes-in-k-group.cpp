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
ListNode* findKthNode(ListNode* temp, int k){
    while(temp->next){
        temp = temp->next;
        k--;
        if(k==1) return temp;
    }
    // cout<<temp->val<<endl;
    return nullptr;
}
ListNode* Reverse(ListNode* temp){
    ListNode* prev = nullptr;
    ListNode* curr = temp;
    while(curr){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp){
            ListNode* kthNode = findKthNode(temp,k);
            if(kthNode==nullptr){
                if(prev) prev->next = temp;
                break;
            } 
            ListNode* newNext = kthNode->next;
            kthNode->next = nullptr;
            ListNode* rev = Reverse(temp);
            if(head==temp){
                head = kthNode;
            }
            else prev->next = kthNode;
            prev = temp;
            temp = newNext;
        }
        return head;
    }
};