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
        if(head==NULL){
            return head;
        }
     ListNode* temp=head;
     ListNode* hea=new ListNode(temp->val);
     temp=temp->next;
     while(temp!=NULL){
        ListNode* newnode=new ListNode(temp->val);
        newnode->next=hea;
        hea=newnode;
        temp=temp->next;
     } 
     return hea; 
    }
};