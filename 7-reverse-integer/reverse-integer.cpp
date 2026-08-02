class Solution {
public:
    //try
    int reverse(int x) {
        int rev=0;
        int l;

        
        while(x!=0){
            l=x%10;
            x/=10;

            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && l>7)) return 0;
            else if(rev<INT_MIN/10 || rev==INT_MIN/10 && l>8) return 0;

            rev=rev*10 + l;
        }

        return rev;

    }
};