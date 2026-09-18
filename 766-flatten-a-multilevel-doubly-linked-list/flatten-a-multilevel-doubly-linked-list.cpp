/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head)
    {
        if(head == NULL)
        {
            return head;
        }

        Node* curr = head;
        /*Node* child = head->next;
        Node* prev;*/

         while(curr != NULL)
        {
            if(curr->child != NULL)
            {
                Node* next = curr->next;

                Node* child = curr->child;

                curr->next = child;
                child->prev = curr;
                curr->child = NULL;

                Node* temp = child;

                while(temp->next != NULL)
                {
                    temp = temp->next;
                }

                if(next != NULL)
                {
                    temp->next = next;
                    next->prev = temp;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};