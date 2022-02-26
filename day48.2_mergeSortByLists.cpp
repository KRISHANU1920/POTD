// Question Link : https://leetcode.com/problems/sort-list/

ListNode* findMid(ListNode* head)
{
    ListNode *slow = head;
    ListNode *fast = head -> next;

    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

ListNode* merge(ListNode* left, ListNode* right)
{
    if(!left)
        return right;

    if(!right)
        return left;

    ListNode *ans = new ListNode(-1);
    ListNode *temp = ans;

    while(left && right)
    {
        if(left -> val <= right -> val) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    if(left)
        temp -> next = left;

    if(right)
        temp -> next = right;

    ans = ans -> next;
    return ans;
}
ListNode* sortList(ListNode* head) 
{
    // base case
    if(head == NULL || head -> next == NULL)
        return head;

    // divide list into two halves
    ListNode *mid = findMid(head);

    ListNode *left = head;
    ListNode *right = mid -> next;
    mid -> next = NULL;

    // sort the left and right halves by recursion
    left = sortList(left);
    right = sortList(right);

    // merge the two sorted halves
    ListNode *ans = merge(left, right);

    return ans;
}

/*

Time Complexity: O(N.Log(N))
Space Complexity: O(Log(N))

*/