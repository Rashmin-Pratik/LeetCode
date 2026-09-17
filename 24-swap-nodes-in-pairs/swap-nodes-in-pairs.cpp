/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;  
        } 

        ListNode* f = head;
        ListNode* s = head -> next;
        ListNode* p = NULL;

        while(f != NULL && s != NULL)
        {
            ListNode* t = s -> next;
            
            s -> next = f;
            f -> next = t;

            if(p != NULL)
            {
                p -> next = s;
            }

            else
            {
                head = s;
            }

              p = f;
              f = t;

              if(t != NULL)
              {
                s = t -> next;
              }

              else
              {
                s = NULL;
              }
        }
        return head;
    }
};