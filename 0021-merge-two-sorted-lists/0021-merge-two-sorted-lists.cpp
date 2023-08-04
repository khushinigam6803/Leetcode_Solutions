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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* splice=nullptr, *curr=splice;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(temp1||temp2)
        {
            if(!temp1)
            {
                ListNode* newnode=new ListNode(temp2->val);
                newnode->next=nullptr;
                temp2=temp2->next;
                if(!splice)
                {
                    splice=newnode;
                    curr=newnode;
                    continue;
                }
                curr->next=newnode;
                curr=newnode;
                continue;
            }

            if(!temp2)
            {
                ListNode* newnode=new ListNode(temp1->val);
                newnode->next=nullptr;
                temp1=temp1->next;
                if(!splice)
                {
                    splice=newnode;
                    curr=newnode;
                    continue;
                }
                curr->next=newnode;
                curr=newnode;
                continue;
            }

            if(temp1->val<temp2->val)
            {
                ListNode* newnode=new ListNode(temp1->val);
                newnode->next=nullptr;
                temp1=temp1->next;
                 if(!splice)
                {
                    splice=newnode;
                    curr=newnode;
                    continue;
                }
                curr->next=newnode;
                curr=newnode;
                continue;
            }

            if(temp1->val>temp2->val)
            {
                ListNode* newnode=new ListNode(temp2->val);
                newnode->next=nullptr;
                temp2=temp2->next;
                 if(!splice)
                {
                    splice=newnode;
                    curr=newnode;
                    continue;
                }
                curr->next=newnode;
                curr=newnode;
                continue;
            }

            if(temp1->val==temp2->val)
            {
                ListNode* newnode1=new ListNode(temp2->val);
                ListNode* newnode2=new ListNode(temp2->val);
                newnode2->next=nullptr;
                newnode1->next=newnode2;
                temp1=temp1->next;
                temp2=temp2->next;
                if(!splice)
                {
                    splice=newnode1;
                    curr=newnode2;
                    continue;
                }
                curr->next=newnode1;
                curr=newnode2;
            }

            
        }
        return splice;
    }
};