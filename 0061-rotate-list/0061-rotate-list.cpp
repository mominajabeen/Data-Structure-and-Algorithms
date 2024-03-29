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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or k <= 0 or !head->next)  return head;
        int len = 1;
        ListNode* iter = head;
        while(iter->next){
            iter = iter->next;
            len++;
        }
        iter->next = head;
        iter = head;
        for(int i = 0; i<len-(k%len) -1;i++){
            iter = iter->next;
        }
        head = iter->next;
        iter->next = nullptr;
        return head;
    }
};