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

    ListNode* merge(ListNode* a , ListNode* b){
        ListNode* extra = new ListNode(-1);
        ListNode* temp = extra;
        ListNode* first = a;
        ListNode* second = b;
        while(first!=NULL && second!=NULL){
            if(first->val<=second->val){
                temp->next = first;
                temp=temp->next;
                first=first->next;
            }
            else{
                temp->next = second;
                temp=temp->next;
                second=second->next;
            }
        }
        if(first==NULL) temp->next=second;
        else if(second==NULL) temp->next=first;
        return extra->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL)return head;
        ListNode* slow =  head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* b = slow->next;
        slow->next = NULL;
        ListNode* a = head;

        a = sortList(a);
        b = sortList(b);

        ListNode* c = merge(a,b);
        return c;
    }
};