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
        struct ListNode* temp =head;
        struct ListNode* nextnode = NULL;
        struct ListNode* nextnextnode = NULL;
        struct ListNode* prevnode  = NULL;

        while(temp!=NULL){


            nextnode = temp ->next;
            // nextnextnode=nextnode->next;
            temp->next = prevnode;
            prevnode = temp;
            temp = nextnode;
            
            
        }
        return prevnode;
    }
};
