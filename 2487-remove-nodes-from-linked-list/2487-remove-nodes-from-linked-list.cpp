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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr = head;
        
        while(curr){
            while(!st.empty() && st.top()->val < curr->val){
                st.pop();
            }
            if(!st.empty())
                st.top()->next = curr;
            st.push(curr);
            curr = curr->next;
        }
        curr = nullptr;
        while(!st.empty()){
            curr = st.top();
            st.pop();
        }
        return curr;
    }
};