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
    ListNode* deleteMiddle(ListNode* head) {
       ListNode* temp=head;
       int count=0;
       while(temp!=NULL){
        count++;
        temp=temp->next;
       } 
       ListNode* temp1=head;
        int i=0;
        int target=count/2;
       while(temp1!=NULL && i!=target-1 && temp1->next!=NULL){
        temp1=temp1->next;
        i++;
       }
       
       temp1->next=temp1->next->next;
       
       return head;
    }
};