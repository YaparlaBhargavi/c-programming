#include <stdio.h>
void main()
{
  int m,n,num;
  printf("enter number of rows:");
  scanf("%d",&m);
  printf("enter number of columns:");
  scanf("%d",&n);
  printf("enter tree number:");
  scanf("%d",&num);
  if(num<=n || num%n==1 || num%n==0){
      printf("yes it is a mango tree");
  }
  else{
  printf("no it is not a mango tree");
  }
}