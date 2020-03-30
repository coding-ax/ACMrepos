/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *p = head;
        ListNode *q = head;
        //让p,q拉开n个位置，要求链表长度为n+1
        for (int i = 0; i < n; i++)
        {
            p = p->next;
        }
        //说明位置不够拉开这么多，也就是总节点数目必定少于n+1
        //也说明此时要删除的位置就是q（head)
        if(!p){
            head = head->next;
            return head;
        }
        //所求为倒数，则直接跟随跑到倒数的位置
        while (p->next)
        {
            p = p->next;
            q = q->next;
        }
        //此时q指向要删除节点的前一个位置，p指向尾结点
        ListNode *temp = q->next;

        if (temp == NULL)
        {
            q->next = NULL;
            return head;
        }
        else
        {
            q->next = temp->next;
        }

        return head;
    }
};
// @lc code=end
