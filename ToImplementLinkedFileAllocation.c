#include<stdio.h>

void allocate(int f[])
{
    int st, len,c,j;
    do{
       printf("Enter starting index and length");
       scanf("%d %d", &st, &len);
        if(st<0 || st>=50 || len<=0 || len+st>50)
        {
            printf("Invalid");
        }
        for(j=0;j<st+len;j++)
        {
            if(f[j]==0)
            {
                f[j]=1;
                printf("\n%d-> Allocated", j);
            }
            else
            {
                printf("\n %d->Already Allocated",j);
            }
        }
        printf("\nDo you want to allocate more");
        scanf("%d",&c);
    }while(c==1);
    
}

int main()
{
    int f[50], i,n,a;
    printf("Enter number of file to allocate ");
    scanf("%d",&n);
    printf("Enter the files to be allocated");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        f[a]=1;
    }
    allocate(f);
    return 0;
}
