//Question : You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
//Example  : Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//           Output: 7 -> 0 -> 8
//Updates  : 
//Code by  : DyleRays
//Time     : 2016/06/02

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int add = 0;
    struct ListNode* pRes;
    struct ListNode* pOP;
    struct ListNode* pOPl1 = l1;
    struct ListNode* pOPl2 = l2;
    pRes = malloc(sizeof(struct ListNode));
    pRes->next = 0;
    pOP = pRes;
    do
    {
        if(pOPl1 == 0)
        {
            pOPl1 = malloc(sizeof(struct ListNode));
            pOPl1->val = 0;
            pOPl1->next = 0;
        }
        if(pOPl2 == 0)
        {
            pOPl2 = malloc(sizeof(struct ListNode));
            pOPl2->val = 0;
            pOPl2->next = 0;
        }
        pOP->val = pOPl1->val + pOPl2->val + add;
        if(pOP->val >= 10)
        {
            add = 1;
            pOP->val = pOP->val % 10;
        }
        else
        {
            add = 0;
        }
        pOPl1 = pOPl1->next;
        pOPl2 = pOPl2->next;
        if((pOPl1 != 0) || (pOPl2 != 0))
        {
            pOP->next = malloc(sizeof(struct ListNode));
            pOP = pOP->next;
            pOP->next = 0;
        }
        else
        {
            if(add == 1)
            {
                pOP->next = malloc(sizeof(struct ListNode));
                pOP = pOP->next;
                pOP->next = 0;
                pOPl1 = malloc(sizeof(struct ListNode));
                pOPl1->val = 0;
                pOPl1->next = 0;
                pOPl2 = malloc(sizeof(struct ListNode));
                pOPl2->val = 0;
                pOPl2->next = 0;
            }
        }
    }while((pOPl1 != 0) || (pOPl2 != 0));
    
    return pRes;
}
