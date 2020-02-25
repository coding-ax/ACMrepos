#define _CRT_SBCURE_NO_DEPRECATE
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

const int maxn = 11000;
const int INF = 0x3f3f3f3f;

struct edge{
    int v1;
    int v2;
    int w;
} ax[maxn];//边
int flag[maxn/10];//点
int main(){
    int t;
    cin>>t;
    while(t--){
        queue<int> q;//定义队列用来寻找
        int counts[maxn/10];//点
        int n,m,k;
        cin>>n>>m>>k;

        for(int i=1;i<=n;i++)
        flag[i]=false;//初始化未感染


        int num=1;//设置标记1，用于存边
        int a,b,c;
        do{
        cin>>a>>b>>c;
        ax[num].v1=a;
        ax[num].v2=b;
        ax[num].w=c;
        num++;
        }while(a!=0&&b!=0&&c!=0);

    for(int i=1;i<=m;i++){
        int c;
        cin>>c;
        q.push(c);
        flag[c]=true;//标记该点被感染
    }

    while(!q.empty()){
        int cou=q.front();
        q.pop();
    for(int i=1;i<num;i++){
        if(ax[i].v1==cou&&ax[i].w<=k&&flag[ax[i].v2]==false)
        {
            q.push(ax[i].v2);
            //cout<<ax[i].v1<<"感染"<<ax[i].v2<<endl;
            flag[ax[i].v2]=true;//感染
        }
        else if(ax[i].v2==cou&&ax[i].w<=k&&flag[ax[i].v1]==false){
            q.push(ax[i].v1);
          // cout<<ax[i].v2<<"感染"<<ax[i].v1<<endl;
            flag[ax[i].v1]=true;
        }
    }
    }
    int co=0;
    for(int i=1;i<=n;i++){
      //  cout<<flag[i]<<" ";
        if(!flag[i])
        co++;
    }
    cout<<co<<endl;


    }

    system("pause");
    return 0;
}
