#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;


typedef long long LL;

int p[100005];
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        for(int i=0; i<n; i++)
        {
            p[i]=i+1;
        }
        int flag=0;
        int temp=n-1;
        int m=k/2;
        int x=k;
        while(m--)
        {
            printf("%d ",p[flag]);
            printf("%d ",p[temp]);
            flag++;
            temp--;
        }
        if(x%2==0)
        {
            for(int i=temp; i>=flag; i--)
            {
                printf("%d ",p[i]);
            }
        }
        if(x%2==1)
        {
            for(int i=flag; i<=temp; i++)
            {
                printf("%d ",p[i]);
            }
        }
        printf("\n");
    }
}
