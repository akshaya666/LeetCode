# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):

    def mergeLL(self,first,second):
        head = ListNode(-1)
        temp = head
        while first and second:
            if first.val<=second.val:
                temp.next = first
                first = first.next
            else:
                temp.next = second
                second = second.next
            temp = temp.next
        while first:
            temp.next = first
            first = first.next
            temp = temp.next
        while second:
            temp.next = second
            second = second.next
            temp = temp.next
        return head.next

    def sortList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        if head is None or head.next is None:
            return head
        
        first = head
        slow = head
        fast  = head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        second = slow.next
        slow.next = None
        firstHalf = self.sortList(first)
        secondHalf = self.sortList(second)

        return self.mergeLL(firstHalf,secondHalf)



        