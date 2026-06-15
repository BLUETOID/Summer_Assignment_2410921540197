#include <bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
 };

 bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast= head;
        while(fast!=nullptr && fast->next !=nullptr){
            slow = slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Creating a cycle

    bool result = hasCycle(head);
    cout << (result ? "true" : "false") << endl;

    return 0;
}