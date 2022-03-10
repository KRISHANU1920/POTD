// Question Link : https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

Node* segregate(Node *head) 
{
    if(!head || !(head -> next))
        return head;
    
    // create dummy nodes and it's pointers
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;
    
    // segregating into three lists
    Node *curr = head;
    while(curr != NULL)
    {
        if(curr -> data == 0) {
            zeroTail -> next = curr;
            zeroTail = curr;
        }
        else if(curr -> data == 1) {
            oneTail -> next = curr;
            oneTail = curr;
        }
        else if(curr -> data == 2) {
            twoTail -> next = curr;
            twoTail = curr;
        }
        curr = curr -> next;
    }
    
    // merging three lists into one
    
    if(oneHead -> next != NULL)
        zeroTail -> next = oneHead -> next;
    else
        zeroTail -> next = twoHead -> next;
        
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    // updating head
    head = zeroHead -> next;
    
    // deleting dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}

/*
Time Complexity: O(N)
Space Complexity: O(1)
*/