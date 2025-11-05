import math
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        if head.next == None:
            return head
        t = head
        while t.next!=None:
            a = t.val
            b = t.next.val
            c = gcd(a,b)
            t1 = t.next
            n = ListNode(c)
            t.next = n
            n.next = t1
            t = t.next.next
        return head
