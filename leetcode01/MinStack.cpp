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
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        minIndex=topIndex=-1;
    }

    void push(int x) {
        VecStack.push_back(x);
        topIndex++;
        if(VecStack.size()==0)
        {   //第一个数据,则初始化min index
            minIndex=topIndex;
        }
        else{
            if(x<VecStack[minIndex]){
                //更新Min index
                minIndex=topIndex;
            }
        }
    }

    void pop() {
        if(minIndex==topIndex){
            int temp=INF;
            for(int i=0;i<=topIndex;i++){
                if(VecStack[i]<temp){
                    minIndex=i;
                    temp=VecStack[i];
                }
            }
        }
        topIndex--;
        if(topIndex==-1){
            minIndex=-1;
        }
        VecStack.pop_back();
    }

    int top() {
           if(topIndex!=-1)
        return VecStack[topIndex];
        else
        return INF;
    }

    int getMin() {
        if(minIndex!=-1)
        return VecStack[minIndex];
        else
        return INF;
    }
    vector<int> VecStack;
    int minIndex;
    int topIndex;
};

int main(){
    ios::sync_with_stdio(false);
    MinStack ustack=MinStack();
    ustack.push(6);
    ustack.push(7);
    ustack.push(8);
    ustack.push(4);
    ustack.push(5);
    ustack.pop();
      cout<<"min="<<ustack.getMin()<<"\ntop="<<ustack.top()<<endl;
      ustack.pop();
          cout<<"min="<<ustack.getMin()<<"\ntop="<<ustack.top()<<endl;
        ustack.pop();
       cout<<"min="<<ustack.getMin()<<"\ntop="<<ustack.top()<<endl;
          ustack.pop();
              cout<<"min="<<ustack.getMin()<<"\ntop="<<ustack.top()<<endl;
            ustack.pop();
             cout<<"min="<<ustack.getMin()<<"\ntop="<<ustack.top()<<endl;
      cout<<"min="<<ustack.getMin()<<"\ntop="<<ustack.top()<<endl;
    system("pause");
    return 0;
}


