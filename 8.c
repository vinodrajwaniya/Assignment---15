#include<stdio.h>
int unique(int a[ ], int n)
{
    int i,j,count=0,k=0;
    int index=0;
    for(i=0;i<(n);i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j])
                count++;
            else 
                index=a[i];
        }
        if(count<=1)
        printf("Unique Value is %d\n",index);
    }   
}
int main()
{
    int a[10000],i;
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d number ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    return(unique(a, n));    
}