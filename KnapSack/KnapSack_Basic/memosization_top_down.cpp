#include <bits/stdc++.h>
using namespace std;
int KnapScak(int *val, int *wt, int max_val, int size) {
int t[max_val][size];
memset(t,-1,sizeof(t));
if(max_val == 0 || size == 0) return 0;
if(t[max_val][size]!=-1) return t[max_val][size];
if(wt[size-1]<max_val) return t[max_val][size]=max(wt[size-1]+ KnapScak(val, wt, wt[size-1]-max_val, size-1), KnapScak(val, wt, max_val, size-1));
else if(wt[size-1]>max_val) return KnapScak(val, wt, max_val, size-1);
}
int main()
{


    return 0;
}