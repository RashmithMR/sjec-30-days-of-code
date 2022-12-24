#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*p,n,s=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the numbers");
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++) 
    {
        scanf("%d", p+i);
        s=s+*(p+i);
    }
    float a =s/n;
    printf("\nThe numbers greater than avg are:");
    i=0;
    while (i<n)
    {
        if(a<*(p+i))
            printf("\n%d\t",*(p+i));
        i++;
    }
    
}