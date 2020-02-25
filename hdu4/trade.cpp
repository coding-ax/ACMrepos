#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct node
{
    int J,F;
    double JF;
}bag[1010];
bool cmp(node x,node y)
{
    return x.JF>y.JF;
}
int main()
{
    int m,n,i;
    while(scanf("%d%d",&m,&n),m!=-1||n!=-1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&bag[i].J,&bag[i].F);
            bag[i].JF = bag[i].J*1.0/bag[i].F;
        }
        sort(bag,bag+n,cmp);
        double sum = 0;
        for(i=0;i<n;i++)
        {
            if(bag[i].F<m)
            {
                sum+=bag[i].J;
                m-=bag[i].F;
            }
            else
            {
                sum+=bag[i].JF*m;
                break;
            }
        }

        printf("%.3lf\n",sum);
    }
}
