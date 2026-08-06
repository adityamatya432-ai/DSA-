class Solution {
public:
    int product(int num){
        int prod = 1;
        while(num!=0){
            int x = num%10;
            prod*=x;
            num/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        while(product(n)%t!=0){
            n++;
        }
        return n;
    }
};