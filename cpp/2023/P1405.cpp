#include "bits/stdc++.h"
using namespace std;

bool flag = false;
void fun(int length,int count,double val){
    double ans = 0;
    double p0 = 1.0*count/length;
    double p1 = 1.0*(length-count)/length;
    ans += p0*log2(p0)*count;
    ans += p1*log2(p1)*(length-count);
    ans*=-1;
    cout<<std::to_string(ans-val)<<endl;
    cout<<std::to_string(ans)<<endl;
    if(std::abs(ans-val)<=0.0001){
        flag = true;
        cout<<endl;
    }
}
int main(){
//    Solution s;
//    vector<int> vector1(23333333,1);
    vector<int> vector1(23333333,1);
    for(int i=11027421;i<=23333333;i++){
        cout<<i<<endl;
        fun(vector1.size(),i,11625907.5798);
        if(flag){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}