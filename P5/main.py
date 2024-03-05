import os
import sys

# 请在此输入您的代码

if __name__ == '__main__':
    n = int(input())
    map1 = {}
    ans = []
    word = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
    for i in range(26):
        map1[i] = word[i]
    while n>0:
        n-=1
        temp=n%26
        n = n//26
        ans.append(map1[temp])
    for i in range(len(ans))[::-1]:
        print(ans[i],end="")
    print()
