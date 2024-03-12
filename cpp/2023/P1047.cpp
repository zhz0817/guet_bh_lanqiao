#include "bits/stdc++.h"
using namespace std;

int get_max(vector<std::pair<int,int>>& pairs,int& n){
    int left = 1;
    int right = INT32_MAX;
    int mid;
    while(left<=right){
        mid = left+(right-left)/2;
        bool flag = true;
        for(int i=0;i<n;i++){
            int a = pairs[i].first;
            int b = pairs[i].second;
            if(a/mid<b){
                right = mid-1;
                flag = false;
                break;
            }
        }
        if(flag){
            left = mid+1;
        }
    }
    return right;
}

int get_min(vector<std::pair<int,int>>& pairs,int& n){
    int left = 1;
    int right = INT32_MAX;
    int mid;
    while(left<=right){
        mid = left+(right-left)/2;
        bool flag = true;
        for(int i=0;i<n;i++){
            int a = pairs[i].first;
            int b = pairs[i].second;
            if(a/mid>b){
                left = mid+1;
                flag = false;
                break;
            }
        }
        if(flag){
            right = mid-1;
        }
    }
    return left;
}
int main(){
    int n;
    cin>>n;
    vector<std::pair<int,int>> vector1(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        std::pair<int,int> pair(a,b);
        vector1[i] = pair;
    }
    int min1 = get_min(vector1,n);
    int max1 = get_max(vector1,n);
    cout<<min1<<" "<<max1<<endl;
    return 0;
}