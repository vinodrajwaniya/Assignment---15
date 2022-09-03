#include<stdio.h>
int smallest(int a[], int );

int smallest(int a[ ], int n)
{
    int i,min;
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return(min);   
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
    printf("Smallest Number is %d",smallest(a, n)); 
    return 0;
}