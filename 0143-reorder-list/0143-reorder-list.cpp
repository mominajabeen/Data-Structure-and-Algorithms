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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* headFirstHalf = head;
        ListNode* headSecondHalf = prev;
        while(headFirstHalf && headSecondHalf){
            ListNode* temp = headFirstHalf->next;
            headFirstHalf->next = headSecondHalf;
            headFirstHalf = temp; 
            
            temp = headSecondHalf->next;
            headSecondHalf->next = headFirstHalf;
            headSecondHalf = temp;
        }
        if(headFirstHalf != nullptr)    headFirstHalf->next = nullptr; 
    }
};