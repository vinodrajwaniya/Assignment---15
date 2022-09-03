#include<stdio.h>
int unique(int a[ ], int n)
{
    int freq[100]={0},i;
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    for(i=0; i<100; i++)
    {
        if(freq[i]!=0)
        printf("%d ==> %d\n",i,freq[i]);
    }
}
int main()
{
    int a[100],i;
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d number ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    return(unique(a, n));    
}