// //加一
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//     for (int i = digits.size() - 1; i >= 0; i--) {
//         if (digits[i] < 9) {
//             digits[i]++;
//             return digits;
//         }
//         digits[i] = 0;
//     }
//     digits.insert(digits.begin(), 1);//return是结束前提
//     return digits;
// }

// };