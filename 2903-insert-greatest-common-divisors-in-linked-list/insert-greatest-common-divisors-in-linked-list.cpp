class Solution {
public:

    int hcf(int a, int b){
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* ans = head;
        ListNode* trav = ans;
        ListNode* temp = head;
        if(temp->next==NULL){
            return temp;
        }
        while(temp->next->next!=NULL){
            int val = hcf(temp->val,temp->next->val);
            temp=temp->next;
            ListNode* data = new ListNode(val);
            trav->next = data;
            data->next = temp;
            trav=trav->next->next;
        }

        int now = hcf(temp->val,temp->next->val);
        temp=temp->next;
        ListNode* node = new ListNode(now);
        trav->next = node;
        node->next = temp;
        return ans;
    }
};