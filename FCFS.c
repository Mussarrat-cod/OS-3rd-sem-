#include<stdio.h>
#include<conio.h>
int main()
{
    int bt[20],wt[20],tat[20];
    int i,n;
    float tatavg,wtavg;
    printf("Enter numbe rof process");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter burst time for process %d",i);
        scanf("%d",&bt[i]);
    }
    wt[0]=wtavg=0;
    tat[0]=tatavg=bt[0];
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i-1]+bt[i];
        tatavg+=tat[i];
        wtavg+=wt[i];
    }
    printf("\nPROCESS\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t %d\t%d\t%d\t\n",i,bt[i],wt[i],tat[i]);
    }
    printf("Average WT %f",wtavg/n);
    printf("Avrage TAT %f",tatavg/n);
}
