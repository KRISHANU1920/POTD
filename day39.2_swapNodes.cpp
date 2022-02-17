// Question Link : https://leetcode.com/problems/swap-nodes-in-pairs/

ListNode* swapPairs(ListNode* head) 
{
    ListNode *curr = head;
    // base case
    if(curr == NULL || curr -> next == NULL)
        return curr;
    
    ListNode *rest = swapPairs(curr -> next -> next);
    ListNode *ans = curr -> next;
    ans -> next = curr;
    curr -> next = rest;
    return ans;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/