// Question Link : https://leetcode.com/problems/intersection-of-two-linked-lists/

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *currA = headA;
    ListNode *currB = headB;
    
    // count number of nodes of listA
    int n1 = 0;
    while(currA != NULL)
    {
        n1++;
        currA = currA -> next;
    }
    
    // count number of nodes of listB
    int n2 = 0;
    while(currB != NULL)
    {
        n2++;
        currB = currB -> next;
    }
    
    currA = headA;
    currB = headB;
    
    // shifting to equal length nodes position
    if(n1 < n2) {
        while(n2 > n1) {
            currB = currB -> next;
            n2--;
        }
    }
    else
    {
        while(n1 > n2) {
            currA = currA -> next;
            n1--;
        }
    }
    
    // searching for intersection point
    while(currA != NULL)
    {
        if(currA == currB)
            return currA;
        
        currA = currA -> next;
        currB = currB -> next;
    }
    return NULL;
}

/*

Time Complexity: O(M+N)
Space Complexity: O(1)

*/