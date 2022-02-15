// Question Link : https://leetcode.com/problems/linked-list-cycle/

bool hasCycle(ListNode *head) 
{
    ListNode *slowPtr = head, *fastPtr = head;
    while(fastPtr != NULL && fastPtr -> next != NULL)
    {
        slowPtr = slowPtr -> next;
        fastPtr = fastPtr -> next -> next;
        if( slowPtr == fastPtr)
            return true;
    }
    return false;
}

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/