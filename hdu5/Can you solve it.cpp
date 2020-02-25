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
#include <map>
using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;
// struct node{
//     string p;
//     int s;
// }a[maxn];
// bool cmp(node a,node b){
//     return a.s>b.s;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         cin>>a[i].p;
//         a[i].s=0;
//     }
//     int num=t;
//     while(t--){
//         int y;
//         cin>>y;
//          for(int i=0;i<y;i++)
//         {
//             for(int i=0;i<num;i++){
//             string temp;
//             int sr;
//             cin>>sr>>temp;
//             for(int j=0;j<num;j++){
//                 if(a[j].p==temp)
//                {
//                    a[j].s+=sr;
//                    break;
//                 }
//             }
//         }


//     }
//     system("pause");
//     return 0;
// }
int a[maxn];
int main(){
    ios::sync_with_stdio(false);
    int t;
    while(cin>>t){
    map<string,int> AX;
    for(int i=0;i<t;i++){
        string temp;
        cin>>temp;
        a[i]=0;
    //     AX.insert(make_pair(temp,0));
    }
    int num=t;
    while(t--){
        int y;
        cin>>y;
         for(int i=0;i<y;i++)
        {
            for(int j=0;j<num;j++){
                string p;
                int s;
                cin>>s>>p;
                AX[p]+=s;
                a[j]=AX[p];
               // cout<<AX[p]<<endl;
            }
            int count =0;
            int AXnum=AX["memory"];
            // for(map<string,int>::iterator it=AX.begin();it!=AX.end();it++){
            //     if((*it).second>AXnum)
            //     count++;
            for(int i=0;i<num;i++){
            //cout<<a[i]<<"->";
               if(a[i]>AXnum)
                 count++;
            }
            // }
            cout<<count+1<<endl;
        }

    }
    }
    system("pause");
    return 0;
}
