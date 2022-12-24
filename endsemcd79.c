#include<stdio.h>
int replace(int n)
{
    int i,prime=1,x,ner;
    int n1=n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==0)
    {
        while(n>0)
        {
        x=n%10;
        ner=ner*10+x;
        n=n/10;
        }
        return ner;
    }
    else
    {   ner=0;x=0;
        while(n1>0)
        {
        x=n1%2;
        ner=ner*10+x;
        n1=n1/2;
        }
        return ner;
    }
}
void main()
{
    int arr[100],n,i,j,k;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    printf("\n");
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\n");
    printf("original array\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\n");
      for ( i = 0; i < n; i ++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if ( arr[i] == arr[j])
            {
                for ( k = j; k < n - 1; k++)
                {
                    arr[k] = arr [k + 1];
                }
                n--;
                j--;
            }
        }}
       printf("duplicate array\n");
        for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
        printf("\n");
        printf("replaced array\n");
        for(i=0;i<n;i++)
        {
             printf("%d\t",replace(arr[i]));
        }




}
