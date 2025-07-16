//只出现一次的数,二进制异或,成对出现的数会相互抵消
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int res=0;
//         for(int x:nums){
//             res^=x;
//         }

//     return res;   
//     }
// };