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
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* hello=nullptr, *temp=head;
        while(temp)
        {
            ListNode* newnode=new ListNode(temp->val);
            if(!hello)
            {
                newnode->next=nullptr;
                hello=newnode;
                temp=temp->next;
                continue;
            }
            newnode->next=hello;
            hello=newnode;
            temp=temp->next;
        }
        return hello;
    }
};