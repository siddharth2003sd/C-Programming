#include<stdio.h>
    int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z'))
    printf("alphabet: %c\n",ch);
    else
    printf("%c is not an alphabet\n",ch);
    return 0;
    }
