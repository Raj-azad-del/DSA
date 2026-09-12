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
     ListNode *temp=head;
     ListNode *new_temp=head;
     int k=0;
     while(temp!=NULL){
        k++;
        temp=temp->next;
     }
       if(k == n) return head->next;
     for(int i=1;i<k-n;i++){
        new_temp=new_temp->next;
     }
     new_temp->next=new_temp->next->next;
     return head;
    }
};