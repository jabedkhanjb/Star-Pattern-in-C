#include<stdio.h>
int main()
{

  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" *");
    }
    printf("\n");
  }


//first attempt done
printf("___________________________________\n");

    // i,j are mentioned in line 5
    for(i=5;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
          printf(" *");
      }
      printf("\n");
    }

printf("___________________________________\n");

for(i=1;i<=5;i++)
    {
      for(j=5;j>=i;j--)
      {
          printf(" %d",j);
      }
      printf("\n");
    }

printf("___________________________________\n");

   int x,y;
    for(x=1;x<=5;x++)
    {
        for(y=1;y<=5;y++)
        {
            if(x==1 ||x==5||y==1 ||y==5)
            {
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

printf("___________________________________\n");



    for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf(" %d",i);
      }
      printf("\n");
    }

printf("___________________________________\n");

    for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf(" %d",j);
      }
      printf(" \n");
    }
    return 0;
}
