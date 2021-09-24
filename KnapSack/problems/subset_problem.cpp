#include<bits/stdc++.h>
using namespace std;
int subSetSum(vector<int> arr, int target)
{   
    int finalAns=0;
    bool t[arr.size()+1][target+1];
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            if(i==0) t[i][j]=true;
            if(j==0) t[i][j]=false;
        }
    }


   
    return finalAns;
}
int main()
{
    vector<int> arr={2,3,7,8,10};
    int size= arr.size();
    int target= 11;
    return 0;
}