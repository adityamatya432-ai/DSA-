# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def reverseList(self,head):

        if head==None or head.next==None:
            return head
        ta = head
        tb = head.next
        temp = tb
        head.next=None

        while temp!=None:
            temp=temp.next
            tb.next = ta
            ta = tb
            tb = temp
        
        return ta

    def isPalindrome(self, head: ListNode | None) -> bool:
        
        if head is None or head.next is None:
            return True
        fast = head
        slow = head

        while fast!=None and fast.next!=None:
            slow = slow.next
            fast = fast.next.next

        right = self.reverseList(slow)
        left = head
        while right!=None and left!=None:
            if right.val!=left.val:
                return False
            right=right.next
            left=left.next
            
        return True