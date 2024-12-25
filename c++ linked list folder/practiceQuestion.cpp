#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        //finding middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //reversing linked list after slow->next 
        ListNode* secondHalf = slow->next;
        slow->next = NULL; // break the list into two halves
        secondHalf = reverseList(secondHalf);

        //check for palindrome linked list
        ListNode* p1 = head;
        ListNode* p2 = secondHalf;
        while(p2 != NULL){
            if(p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        // restore the original list
        secondHalf = reverseList(secondHalf);
        slow->next = secondHalf;

        return true;
    }
    //reversing the linked list after slow->next 
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(head != NULL){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};

int main() {
    Solution solution;

    // Create a sample linked list: 1 -> 2 -> 3 -> 2 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(1);

    bool result = solution.isPalindrome(head);

    if (result) {
        std::cout << "The linked list is a palindrome." << std::endl;
    } else {
        std::cout << "The linked list is not a palindrome." << std::endl;
    }

    return 0;
}