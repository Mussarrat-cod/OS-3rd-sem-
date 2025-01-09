#include<stdio.h>
int main()
{
    int t[20],d[20],h,i,j,n,temp,k,atr[20],sum=0,p=0;
    printf("Enter the number of tracks to be traversed");
    scanf("%d",&n);
    printf("Enter head position");
    scanf("%d",&h);
    t[0]=h;
    printf("Enter tracks");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t[i]);
    }
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(t[j]>t[j+1])
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<=n;i++)
    {
        if(t[i]==h)
        {
            k=i;
            break;
        }
    }
    
    for(i=k;i<=n;i++,p++)
    {
        atr[p]=t[i];
    }
    
    for(i=k-1;i>=0;i--,p++)
    {
        atr[p]=t[i];
    }
    
    printf("Sequence of ttracks");
    for(i=0;i<p;i++)
    {
        printf("%d",atr[i]);
    }
    printf("\n");
    
    for(i=0;i<p-1;i++)
    {
        if(atr[i]>atr[i+1])
        {
            d[i]=atr[i]-atr[i+1];
        }
        else
        {
            d[i]=atr[i+1]-atr[i];
        }
        sum+=d[i];
    }
    printf("Toatal Head momvement %d",sum);
    printf("Average head movements %f",(float)sum/n);
    return 0;
}
