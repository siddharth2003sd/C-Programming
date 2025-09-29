#include<stdio.h>
    int main(){
    int prev,cur,nxt,n;
    scanf("%d",&n);
    prev=-1,cur=1;
    for(int i=1;i<=n;i++){
    nxt=prev+cur;
    printf("%d",nxt);
    prev=cur;
    cur=nxt;
    }
    return 0;
    }
