class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if(!head)return head;
        ListNode* prev=head;
        ListNode* temp=prev->next;
     
        while(temp){
            if(temp->val==prev->val){
            temp=temp->next;
            continue;
            }
            else{
                prev->next=temp;
                prev=temp;
                temp=temp->next;
                
            }

        }
        prev->next=NULL;
        return head;
    }
};