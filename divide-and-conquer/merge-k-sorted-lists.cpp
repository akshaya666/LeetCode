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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(auto head:lists)
        {
            while(head)
            {
                minheap.push(head->val);
                head=head->next;
            
            }
        }
        ListNode* temp=new ListNode(0);
        ListNode* ptr=temp;
        while(!minheap.empty())
        {
            ptr->next=new ListNode(minheap.top());
            minheap.pop();
            ptr=ptr->next;
        }
        return temp->next;
    }
};