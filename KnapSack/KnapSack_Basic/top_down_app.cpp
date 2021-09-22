#include<bits/stdc++.h>
using namespace std;
int KnapScak(int *val, int *wt, int w, int n){
    int t[n+1][w+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<w; j++){
            if(i==0 || j==0) t[i][j] =0;
        }
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<w+1; j++){
            if(wt[i-1] < j) t[j][i]= max(wt[i-1]+ t[i-1][j-wt[i-1]], t[j-1][i-1]);
            else t[i][j]= t[i-1][j];
        }
    }

}
int main()
{


    return 0;
}