#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
        ListNode *prev=nullptr;
        ListNode *curr=head;
        while(curr!=nullptr){
            ListNode *next = curr->next;;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    head->next = second;
    second->next = third;

    ListNode* reversed = reverseList(head);
    ListNode* current = reversed;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    

    return 0;
}