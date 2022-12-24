#include<stdio.h>
void main()
{
    int i,m,n;
    printf("Enter the size of board(c,r)");
    scanf("%d%d",&m,&n);
    i=m*n;
    i%3==0?printf("Yes\n"):printf("No\n");
}