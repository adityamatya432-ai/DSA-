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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(!head || !head->next || !head->next->next)
            return {-1,-1};
        int idx = 1;
        int fidx = -1;
        int lidx = -1;
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;

        int m = 0;
        int n = 0;

        int minDist = INT_MAX;

        while(c){
            if(b->val > a->val && b->val>c->val || b->val < a->val && b->val<c->val){
                n = idx;
                if(fidx==-1){
                    fidx = idx;
                }
                else{
                    lidx=idx;
                }
                if(m!=0) minDist = min(n-m,minDist);
                m=n;

            }

            a=a->next;
            b=b->next;
            c=c->next;
            idx++;

        }

        int maxDist = lidx-fidx;

        if(lidx==-1){
            return {-1,-1};
        }


        return {minDist,maxDist};

    }
};