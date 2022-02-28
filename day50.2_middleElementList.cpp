// Question Link : https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/

int getMiddle(Node *head)
{
    Node *slow = head, *fast = head;
    
    while(fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow -> data;
}

/*

Time Complexity: O(N)
Space Complexity: O(1)

*/