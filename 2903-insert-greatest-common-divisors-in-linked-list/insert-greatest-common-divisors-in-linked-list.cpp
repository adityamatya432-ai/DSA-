class Solution {
public:

    int hcf(int &data1,int &data2){
        int maxi = INT_MIN;
        if(data1==data2){
            return data1;
        }
        else if(data1>data2){
            for(int i = 1;i<=data2;i++){
                if(data1%i==0 && data2%i==0){
                    maxi = max(maxi,i);
                }
            }
        }

        else if(data1<data2){
            for(int i = 1;i<=data1;i++){
                if(data1%i==0 && data2%i==0){
                    maxi = max(maxi,i);
                }
            }
        }
        return maxi;
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