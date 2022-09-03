#include<stdio.h>
int reverse(int a[ ], int n)
{
    int i;
    for(i=(n-1);i>=0;i--)
    printf("%d ",a[i]); 
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
    return(reverse(a, n));
}