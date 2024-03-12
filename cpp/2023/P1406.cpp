#include "bits/stdc++.h"
using namespace std;

int main(){
    string s = "5 6 8 6 9 1 6 1 2 4 9 1 9 8 2 3 6 4 7 7 5 9 5 0 3 8 7 5 8 1 5 8 6 1 8 3 0 3 7 9 2 7 0 5 8 8 5 7 0 9 9 1 9 4 4 6 8 6 3 3 8 5 1 6 3 4 6 7 0 7 8 2 7 6 8 9 5 6 5 6 1 4 0 1 0 0 9 4"
               " 8 0 9 1 2 8 5 0 2 5 3 3";
    vector<int> vector1;
    for (int i = 0; i < s.size(); i+=2) {
        char ch = s[i];
        vector1.emplace_back(ch-'0');
    }
    unordered_set<int> set1;
    vector<int> days = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int length = vector1.size();
    for(int i1=0;i1<length;i1++){
        for(int i2=i1+1;i2<length;i2++){
            for(int i3=i2+1;i3<length;i3++){
                for(int i4=i3+1;i4<length;i4++){
                    int val1 = vector1[i1]*1000+vector1[i2]*100+vector1[i3]*10+vector1[i4];
                    if(val1==2023){
                        int temp1 = 20230000;
                        for(int i5=i4+1;i5<length;i5++){
                            for(int i6=i5+1;i6<length;i6++){
                                int val2 = vector1[i5]*10+vector1[i6];
                                if(val2>0&&val2<=12){
                                    int temp2 = temp1+val2*100;
                                    for(int i7=i6+1;i7<length;i7++){
                                        for(int i8=i7+1;i8<length;i8++){
                                            int val3 = 10*vector1[i7]+vector1[i8];
                                            if(val3>0&&val3<=days[val2]){
                                                int temp3 = temp2+val3;
                                                set1.insert(temp3);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<set1.size();
    return 0;
}