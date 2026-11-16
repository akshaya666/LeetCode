# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        temp = head

        oddHead = ListNode(-1)
        oddItr = oddHead

        evenHead = ListNode(-1)
        evenItr = evenHead
        count = 1
        while temp:
            
            if count%2==0:
                evenItr.next = temp
                evenItr = evenItr.next
            else:
                oddItr.next = temp
                oddItr = oddItr.next
            temp = temp.next
            count+=1
        
        oddItr.next = evenHead.next
        evenItr.next = None
        return oddHead.next


                

        