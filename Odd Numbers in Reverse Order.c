#include<stdio.h>
    int main(){
    int n;
    scanf("%d",&n);
    for(int i=n%2?n:n-1;i>=1;i-=2)
    printf("%d",i);
    return 0;
    }
