// Question Link : https://leetcode.com/problems/add-two-numbers/

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode *ans = new ListNode(-1);
    ListNode *curr = ans;
    
    ListNode *curr1 = l1;
    ListNode *curr2 = l2;
    
    int carry = 0, sum = 0;
    while(curr1 && curr2)
    {
        sum = curr1 -> val + curr2 -> val + carry;
        carry = sum/10;
        ListNode *temp = new ListNode(sum%10);
        curr -> next = temp;
        curr = curr -> next;
        curr1 = curr1 -> next;
        curr2 = curr2 -> next;
    }
    
    while(curr1)
    {
        sum = curr1 -> val + carry;
        carry = sum/10;
        ListNode *temp = new ListNode(sum%10);
        curr -> next = temp;
        curr = curr -> next;
        curr1 = curr1 -> next;
    }
    
    while(curr2)
    {
        sum = curr2 -> val + carry;
        carry = sum/10;
        ListNode *temp = new ListNode(sum%10);
        curr -> next = temp;
        curr = curr -> next;
        curr2 = curr2 -> next;
    }
    
    if(carry)
    {
        ListNode *temp = new ListNode(carry);
        curr -> next = temp;
        curr = curr -> next;
    }
    
    return ans -> next;
}

/*

Time Complexity: O(max(M,N))
Space Complexity: O(max(M,N))

*/