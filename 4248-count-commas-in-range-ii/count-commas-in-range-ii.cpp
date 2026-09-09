class Solution {
public:
    long long countCommas(long long n) {
        long long c = n;
        if(n<=999) return 0;
        long long digits=0; 
        while(n>0){
            n=n/10;
            digits++;
        }
        long long td= digits;
        long long comm=0;
        while(digits>3){
            long long ta = 1;
            long long mul = (digits-1)/3;
            ta=9*(long long)pow(10,digits-1)*mul;
            comm+=ta;
            digits--;
        }

        long long max = 0;
        for(long long i = 0;i<td;i++){
            long long t = 9*(long long)pow(10,i);
            max+=t;
        }

        long long q = (td-1)/3;

        return comm-(max-c)*q;
        return comm;

        // return max;
    }
};