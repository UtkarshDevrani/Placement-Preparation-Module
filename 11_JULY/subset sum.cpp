Bobble BackgroundBobble Head
Problems
Courses
Geek-O-Lympics
Events
POTD

Refresh

Time (IST)	Status	Lang	Test Cases	Code
2023-07-11 09:34:39	Correct	cpp	113 / 113	View
2023-01-25 22:21:15	Correct	cpp	113 / 113	View
Output Window
Suggest Feedback
Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
113 /113
Your Total Score: 
953
Total Time Taken: 
0.26
Correct Submission Count: 
2
Attempts No.: 
2
Next Suggested Problem(s):
Making elements distinct
Multiples Power
G.F Series
Geek Tip:
Post your approach and suggestions in the comment section.
Go through the Problem Editorial and solutions submitted by others to know about alternate approaches to this problem. Keep coding !
C++ (g++ 5.4)



//{ Driver Code Starts
#include<bits/stdc++.h> 


 

Custom Input
class Solution
{
public:
   vector<int>ans;
    void solve(vector<int>&arr,vector<int>temp,int ind,int sum)
    {
        if(ind>=arr.size())ans.push_back(sum);
        else{
            temp.push_back(arr[ind]);
            solve(arr,temp,ind+1,sum+arr[ind]);
            temp.pop_back();
            solve(arr,temp,ind+1,sum);
        }
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>temp;
        solve(arr,temp,0,0);
        return ans;
        // Write Your Code here
    }
};