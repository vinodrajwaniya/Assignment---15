#include<stdio.h>
int duplicate(int a[ ], int n)
{
    int i,j,count=0;
    for(i=0;i<(n-1);i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
                ++count;
        }
    }
    printf("Dublicate times is %d",count);

}
int main()
{
    int a[10000],i,j,count=0;
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d number ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    return(duplicate(a, n));
}