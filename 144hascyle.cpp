//环形链表，快慢指针，快追上慢说明有环
// bool hasCycle(ListNode *head) {
//     if (!head || !head->next) return false;
//     ListNode *slow = head, *fast = head->next;
//     while (slow != fast) {
//         if (!fast || !fast->next) return false;
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return true;
// }
