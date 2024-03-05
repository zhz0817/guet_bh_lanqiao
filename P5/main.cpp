#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin>>n;
    stack<char> stack1;
    while(n>0){
        n--;
        int temp = n%26;
        n/=26;
        stack1.push(temp+'A');
    }
    while(!stack1.empty()){
        cout<<stack1.top();
        stack1.pop();
    }
    cout<<endl;
    return 0;
}
