#include<iostream>
#include<stack>
#include<vector>
using namespace std;


// 头铁之王...

// class Solution {
// public:
//     int uniquePathsWithObstacles(vector< vector< int > >& obstacleGrid) {
//         // 边界处理 m 纵向 n 横向
//         int m = obstacleGrid.size();
//         if(m==0)return 0;
//         int n = obstacleGrid[0].size();
//         if(n==0)return 0;
//         // 总计数器
//         int  count =0;
//         // 换成下标便于判断
//         m--;
//         n--;
//         // 用一个[right,down]来抽象point
//         // 用stack<vector>来抽象队列
//         stack< vector< int > > sta;
//         vector< int > init_v;
//         init_v.push_back(0);
//         init_v.push_back(0);
//         sta.push(init_v);
//         // 遍历栈
//         while(!sta.empty()){
//             // 拿到当前栈顶元素,并且推出栈
//             vector<int> current_point = sta.top();
//             sta.pop();
//             // 开始进行相关判断
//             // 首先达到终点肯定不会再放入栈中
//             // 拿到当前的点
//             int right = current_point[0];
//             int down = current_point[1];
//             // 如果可以往右边走(1.没有越界 2.下个点不是障碍)
//             if(right+1<=n&&obstacleGrid[down][right+1]==0){
//                 // 判断是否到了终点,到了就count++，否则就进栈
//                 if(right+1==n&&down==m){
//                     count++;
//                 }
//                 else{
//                     vector< int > next_point;
//                     next_point.push_back(right+1);
//                     next_point.push_back(down);
//                     sta.push(next_point);
//                 }
//             }
//             // 如果可以往下边走(1.没有越界 2.下个点不是障碍)
//             if(down+1<=m&&obstacleGrid[down+1][right]==0){
//                 // 判断是否到了终点,到了就count++，否则就进栈
//                 if(right==n&&down+1==m){
//                     count++;
//                 }
//                 else{
//                     vector< int > next_point;
//                     next_point.push_back(right);
//                     next_point.push_back(down+1);
//                     sta.push(next_point);
//                 }
//             }

//         }
//         return count;


//     }
// };






int main(){
    // Solution test;

    system("pause");
}
