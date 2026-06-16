#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val <=list2->val){
                curr->next = list1;
                list1=list1->next;
            }
            else{
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }

        if(list1!=nullptr)curr->next=list1;
        if(list2!=nullptr)curr->next=list2;

        return dummy->next;
    }

int main() {
    // list1: 1->3->5
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    // list2: 2->4->6
    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    ListNode* merged = mergeTwoLists(list1, list2);

    ListNode* current = merged;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }

    return 0;
}