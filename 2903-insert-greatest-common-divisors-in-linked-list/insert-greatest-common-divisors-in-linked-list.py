# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        temp = head
        trav = head

        def hcf(a:int,b:int)->int:
            return gcd(b, a % b)
        
        if temp.next == None:
            return temp

        while temp.next.next!= None:
            data = hcf(temp.val,temp.next.val)
            node = ListNode(data)
            temp = temp.next
            trav.next = node
            node.next = temp
            trav = trav.next.next

        
        now = hcf(temp.val,temp.next.val)
        dol = ListNode(now)
        temp = temp.next
        trav.next = dol
        dol.next = temp
        return head