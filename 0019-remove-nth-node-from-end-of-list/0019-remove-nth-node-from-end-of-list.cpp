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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
        return head;
        if(!head->next)
        {
            delete head;
            head=nullptr;
            return head;
        }
        ListNode* temp=head; int count=0;
        while(temp)
        {
            count++; temp=temp->next;
        }
        int jumps=count-n-1;
        if(jumps==-1)
        {   ListNode* temp=head->next;
        delete head;
        head=temp;
            return head;}
        temp=head;
        while(jumps!=0)
        {
            jumps--;
            if(temp)
            temp=temp->next;
        }
        ListNode* temp2;
        if(temp->next->next)
        temp2=temp->next->next;
        else
        temp2=nullptr;
        delete temp->next;
        temp->next=temp2;
        return head;
    }
};