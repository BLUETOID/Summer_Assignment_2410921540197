#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>mp;

        stack<int>st;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[i] > st.top()){
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        while(!st.empty()){
            mp[st.top()]=-1;
            st.pop();
        }

        for(int i=0;i<nums1.size();i++){
            nums1[i]=mp[nums1[i]];
        }

        return nums1;

    }

    int main(){
        vector<int> nums1 = {4,1,2};
        vector<int> nums2 = {1,3,4,2};
        vector<int> result = nextGreaterElement(nums1, nums2);
        for(int i=0;i<result.size();i++){
            cout << result[i] << " ";
        }
        cout << endl;
        return 0;
    }
