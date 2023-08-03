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
    ListNode* middleNode(ListNode* head) {
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(!count%2)
    count=(count+1)/2;
    else
    count/=2;
    temp=head;
    int i=0;
    while(i!=count)
    {
        temp=temp->next;
        i++;
    }
    return temp;
        
    }
};