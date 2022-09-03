#include<stdio.h>
int rotate(int a[ ], int n, int d)
{
    int i;
     while (d!=0)
    {
        int temp = a[n-1];
        for(i=n; i>0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        d--;
    }
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
}

int main()
{
    int a[1000],i,d;
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d value ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Rotate fron no. ");
    scanf("%d",&d);
    return(rotate(a, n, d));
}