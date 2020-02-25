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
#include <sstream>
#include <iomanip>
using namespace std;

const int maxn = 110;
const int INF = 0x3f3f3f3f;
struct node{
    string name;
    int count;
}a[maxn];
bool cmp(node a,node b){
        if(a.count>b.count)
        return true;
        else if(a.count==b.count)
        return a.name<b.name;
        else
        return false;
}

int main(){
    ios::sync_with_stdio(false);
    map<string,int> hwzz;
    string line;
    while(getline(cin,line)){
       stringstream ss(line);
       string temp;
        while(ss>>temp){
            hwzz[temp]++;
        }
    int i=0;
    for( map<string,int>::iterator it=hwzz.begin();it!=hwzz.end();it++){
        a[i].name=(*it).first;
        a[i++].count=(*it).second;
    }
    sort(a, a+i,cmp);
    for(int j=0;j<(i>20?20:i);j++){
        cout<<a[j].name<<a[j].count<<endl;
    }
    }

    system("pause");
    return 0;
}
