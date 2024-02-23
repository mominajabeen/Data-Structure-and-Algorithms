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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)   return head;
        ListNode* prev = nullptr, *curr = head;
        
        for(int i = 0; curr != nullptr && i<left-1; ++i){
            prev = curr;
            curr = curr->next;
        }
        ListNode* lastNodeofFirstPart = prev;
        ListNode* lastNodeofSublist = curr;
        ListNode* temp = nullptr;
        
        for(int i = 0; curr != nullptr && i<right - left + 1; i++){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        if(lastNodeofFirstPart){
            lastNodeofFirstPart->next = prev;
        }
        else
            head = prev;
        lastNodeofSublist->next = curr;
        return head;
    }
};