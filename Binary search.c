#include<stdio.h>
int main()
{
    int a[100],n,i,key,found=0,low,mid=0,high;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter the %d elements in ascending order :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search:\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high&&!found)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            found=1;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if (found==1)
    {
    printf("key found at position %d \n",mid+1);
    }
    else
    {
        printf("key not found");
    }
    return 0;
}