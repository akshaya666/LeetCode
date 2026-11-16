# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if head is None or head.next is None:
            return head
        
        new_head = self.reverseList(head.next)

        front = head.next
        front.next = head
        head.next = None

        return new_head
    def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """

        slow = head
        fast = head

        while fast and fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next

        first = head 
        second = self.reverseList(slow.next)

        while second:

            if first.val == second.val:
                first = first.next
                second = second.next
            else:
                return False
        return True
        