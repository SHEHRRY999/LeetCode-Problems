class Solution {
public:
    int mySqrt(int x) {
        if(x < 0){
            return -1;
        }
        long long n = 1;
        while(n * n <= x){
           n++; 
        }
        return (int)(n - 1);
        
    }
};