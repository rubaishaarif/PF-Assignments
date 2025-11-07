#include<stdio.h>
#include<string.h>
int countfrequency(int arr[],int len);
int main()
{
    int size, i;
    printf("enter size of array : ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
    printf("enter %d element\n",i+1);
    scanf(" %d",&a[i]);
    if(a[i]>10 || a[i]<0)
    {
        printf("please enter elements between 0 and 10\n");
        i--;
    }
    }
    printf("the elements are:\n");
      for(i=0;i<size;i++)
    {
    printf("%d\n",a[i]);
    }
    countfrequency(a,size);
    return 0;
}
int countfrequency(int arr[],int len)
{
    int i,j,k;
    int checked[len];
    
    for(i=0;i<len;i++)
    {
    checked[i]=0; 
    for(i=0;i<len;i++)
    {
   if(checked[i]==1)
    continue;
        int count=0;
        for(j=0;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                checked[j]=1;
            }
        }
        printf("%d occures %d times\n",arr[i],count);
        
    }
    }
}