#include<bits/stdc++.h>
using namespace std;
int KnapScak(int *wt, int *qt, int max_wt, int size)
{
    if(size==0 || max_wt==0) return 0;
    if(wt[size-1] <max_wt) return max(wt[size-1]+ KnapScak(wt, qt, max_wt-wt[size-1], size-1), KnapScak(wt, qt, max_wt, size-1));
    else if(wt[size-1]>max_wt) return KnapScak(wt, qt, max_wt, size-1);
}
int main()
{
int val[]={1,3,4,5};
int qt[]={1,4,5,7};
int size= sizeof(val)/sizeof(val[0]);
int max_wt= 10;
KnapScak(val, qt, max_wt, size);

    return 0;
}