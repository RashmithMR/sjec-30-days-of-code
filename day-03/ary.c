#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*p,n,s=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++) 
    {
        scanf("%d", p+i);
        s=s+*(p+i);
    }
    int a =s/n;
    while (a<*(p+i))
    {
        printf("%d");
    }
    
}