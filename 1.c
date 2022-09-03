#include<stdio.h>
int greatest(int a[], int );

int greatest(int a[ ], int n)
{
    int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return(max);   
}
int main()
{
    int a[1000];
    int n,i;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d number's ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Greatest Number is %d",greatest(a, n)); 
    return 0;
}