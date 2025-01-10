#include<stdio.h>
#include<stdlib.h>
int main()
{
    int buf[20], bufsize, in,out,produce,consume, choice;
    choice=0,bufsize=10;
    in=0, out=0;
    while(choice!=3)
    {
      printf("\n 1.PRODUCE \n2.CONSUME \n3.EXIT");
      printf("Enter ur chouce:");
      scanf("%d",&choice);
      switch(choice)
      {
         
          case 1:
           printf("Enter the number");
          scanf("%d",&produce);
          if((in+1)%bufsize==out)
          {
              printf("Full");
          }
          else
          {
              buf[in]=produce;
              in=(in+1)%bufsize;
          }
          break;
          case 2:
          if(in==out)
          {
              printf("Empty");
          }
          else
          {
              consume=buf[out];
              printf("Deleted element is %d",consume);
              out=(out+1)%bufsize;
          }
          break;
          case 3:
          exit(0);
      }
    }
   
}
