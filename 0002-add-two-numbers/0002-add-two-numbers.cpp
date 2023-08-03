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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL, *temp1=l1, *temp2=l2;
        int adder=0;
        while(temp1||temp2)
        {
            ListNode* newnode=new ListNode;
            int a=0; int b=0; 
            if(temp1)
            {a=temp1->val; temp1=temp1->next;}
            if(temp2)
            {b=temp2->val; temp2=temp2->next;}
            newnode->val=a+b+adder;
            if(newnode->val/10!=0)
            {
                adder=newnode->val/10;
                newnode->val%=10;
            }
            else
            adder=0;
            newnode->next=nullptr;
            if(!head)
            {
                head=newnode;
                //continue;
            }
            else
            {
                ListNode* temp=head;
                while(temp->next)
                temp=temp->next;
                temp->next=newnode;
            }
        }
        if(adder!=0)
        {
            ListNode* newnode=new ListNode;
            newnode->val=adder;
            newnode->next=nullptr;
            ListNode* temp=head;
                while(temp->next)
                temp=temp->next;
                temp->next=newnode;
        }
        /*ListNode* temp=head;
        while(temp)
        {
            if(temp->val/10!=0)
            {
                if(temp->next==nullptr)
                {
                    ListNode* newnode=new ListNode;
                    newnode->val=temp->val/10;
                    newnode->next=nullptr;
                    temp->next=newnode;
                }
                else
                {
                    temp->next->val+=temp->val/10;
                    temp->val%=10;
                }
            }
            temp=temp->next;
        }*/
        return head;
    }
};