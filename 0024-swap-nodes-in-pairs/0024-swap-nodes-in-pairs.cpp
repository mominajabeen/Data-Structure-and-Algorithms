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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode* dummyNode = new ListNode();
        ListNode* prevNode = dummyNode;
            while(head && head->next){
                prevNode->next = head->next;
                head->next = prevNode->next->next;
                prevNode->next->next = head;
                
                prevNode = head;
                head = head->next;
            }
       return dummyNode->next;

    }
};