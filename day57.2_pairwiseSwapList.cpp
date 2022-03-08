// Question Link : https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1

Node* pairWiseSwap(struct Node* head) 
{
    // base case
    if(!head || !(head -> next))
        return head;
        
    // recursive call
    Node *rest = pairWiseSwap(head -> next -> next);
    
    // swapping by merging
    Node *temp = head -> next;
    temp -> next = head;
    head -> next = rest;
    head = temp;
    
    return head;
}

/*

Time Complexity: O(N)
Space Complexity: O(N)

*/