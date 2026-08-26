class Solution {
public:
    int add(int num){
        int ans = 0;
        while(num!=0){
            int t = num%10;
            ans+=t;
            num/=10;
        }
        return ans;
    }

    int prod(int num){
        int ans = 1;
        while(num!=0){
            int t = num%10;
            ans*=t;
            num/=10;
        }
        return ans;
    }
    bool checkDivisibility(int n) {
        int num = n;
        int sum = add(num);
        int mul = prod(num);
        if(num%(sum+mul)==0)return true;
        return false;
    }
};