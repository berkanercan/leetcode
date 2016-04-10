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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        
        std::map<int, int> lookup;
        
        // put all the elements of LinkedList A into a map
        ListNode *curNode = headB;
        while( curNode != NULL){
            lookup[curNode->val] = 1;
            curNode = curNode->next;
        }
        
        // now iterate through the linkedList B and compare
        curNode = headA;
        while( curNode != NULL){
            if(lookup.find(curNode->val) != lookup.end() ){
                return curNode;
            }
            curNode = curNode->next;
        }
        
        return NULL;
    }
};
