#include<stdio.h>
int sort(int a[ ], int n)
{
    int temp,i,j;
    for(i=1;i<(n);i++)
    {
        for (j=0;j<(n-1);j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]); 
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
    return(sort(a, n));
}