/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    while(!head) return head;
    struct ListNode *p = head,*q = p;
    while(q->next)
    {
        if(q->val == q->next->val)
        {
            q = q->next;
        }
        else
        {
            p->next = q->next;
            p = q->next;
            q = p;
        }
    }
    p->next = NULL;
    return head;
}
