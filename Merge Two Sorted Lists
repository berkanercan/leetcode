/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *headNode = NULL;
        ListNode *curNode = NULL;
        if( l1 != NULL && l2 != NULL ){
            if(l1->val < l2->val){
                headNode = l1;
                l1 = l1->next;
            }
                
            else{
                headNode = l2;
                l2 = l2->next;
            }
                
            curNode = headNode;
        
            while(l1 != NULL && l2 != NULL){
                if(l1->val < l2->val){
                    curNode->next = l1;
                    l1 = l1->next;
                }
                else{
                    curNode->next = l2;
                    l2 = l2->next;
                }
                curNode = curNode->next;
                
            }
        
            if(l1 != NULL)
                curNode->next = l1;
            else
                curNode->next = l2;
        }
        else if(l1 != NULL)
            headNode = l1;
        else
            headNode = l2;
            
        return headNode;
    }
};
