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
       ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
                count++;
                temp=temp->next;
        } 
        
        if(count == n)
             return head->next;
        ListNode* temp1=head;
        int stopi=count-n;
        int i=1;
        while(i<stopi){
            temp1=temp1->next;
            i++;
        }
       
        temp1->next=temp1->next->next;
        return head;
    }
};