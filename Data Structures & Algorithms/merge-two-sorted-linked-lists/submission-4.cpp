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
        struct ListNode* newlist= NULL;
        struct ListNode* first = list1;
        struct ListNode* second = list2;
        struct ListNode* head = NULL;

        if(list1 == NULL)return list2;
        if(list2 == NULL)return list1;


        while(first!=NULL && second!=NULL){

            if(first->val <= second->val){
                if(newlist==NULL){newlist = first;
                head = newlist;}
                else {newlist->next = first;
                newlist = newlist->next;}


                first = first->next;

            }

            else{
                if(newlist==NULL){newlist = second;
                head = newlist;}
                else {newlist ->next = second;
                newlist = newlist->next;}

                second = second ->next;
            }


        }

        
            if(first!=NULL){
                newlist->next=first;
                
            }
        
        
            if(second!=NULL){
                newlist->next=second;
                
            }

        return head;
    }
};
