#include<stdio.h>
int adjacent_duplicate(int a[ ], int n)
{
    int i;
    for(i=0; i<n; i++)
    if(a[i]==a[i+1])
    printf("Duplicate value is %d \n",a[i]); 
}

int main()
{
    int a[100],i;
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d number ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    return(adjacent_duplicate(a, n));
}