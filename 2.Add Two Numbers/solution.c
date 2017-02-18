/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p = l1, *q = l2, *re, *link, *i;
    int flag = 0;
    for(;p && q;p = p->next, q = q->next) {
        if(p->val + q->val + flag >= 10)
        {
            p->val = p->val + q->val + flag - 10;
            flag = 1;
        }
        else
        {
            p->val = p->val + q->val + flag;
            flag = 0;
        }
        q->val = p->val;
    }
    if(!p && !q)
    {
        if(flag)
        {
            p = (struct ListNode *)malloc(sizeof(struct ListNode));
            p->val = 1;
            p->next = NULL;
            for(i = l1;i->next;i = i->next);
            i->next = p;
        }
        return l1;
    }
    else if(p || q)
    {
        re = p ? l1 : l2;
        link = p ? p : q;
        for(;link;link = link->next)
        {
            if(link->val + flag >= 10)
            {
                link->val = link->val + flag - 10;
                flag = 1;
            }
            else
            {
                link->val = link->val + flag;
                flag = 0;
            }
        }
        if(flag)
        {
            link = (struct ListNode *)malloc(sizeof(struct ListNode));
            link->val = 1;
            link->next = NULL;
            for(i = re;i->next;i = i->next);
            i->next = link;
        }
    }
    return re;
}
