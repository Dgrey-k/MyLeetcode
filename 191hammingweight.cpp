//求二进制数中1的个数
// class Solution {
// public:
//     int hammingWeight(int n) {
//         int res=0;
//         while(n){
//             n&=n-1;
//             res+=1;
//         }
//     return res;    
//     }
// };