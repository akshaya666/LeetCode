# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):

    def reverseLL(self,head):

        
        temp = head
        prev = None

        while temp:
            front = temp.next
            temp.next = prev
            prev = temp
            temp = front
        return prev
    
    def getKthNode(self,head,k):
        count = k
        temp = head

        while temp and count>1:
            temp = temp.next
            count-=1
        return temp
        
    def reverseKGroup(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        temp = head

        prevLast = None

        while temp:

            kthnode = self.getKthNode(temp,k)

            if kthnode is None:
                if prevLast:
                    prevLast.next = temp
                break
            nextNode = kthnode.next

            kthnode.next = None

            self.reverseLL(temp)

            if head == temp:

                head = kthnode
            
            else:
                prevLast.next = kthnode
            
            prevLast = temp

            temp = nextNode
        return head



        