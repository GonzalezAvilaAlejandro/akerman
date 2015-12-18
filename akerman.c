#include <stdio.h>



int Ackerman(m, n)
int m, n;

{
int ans;
if(m == 0) ans = n+1;
else if (n == 0) ans = Ackerman(m-1,1);
else ans = Ackerman(m-1, Ackerman(m,n-1));


 return (ans);
}

int main()
{
  int i, j;
  for(i =0; i<6; i++)
  for(j=0;  j<6; j++)
  printf("Ackerman (%d, %d) es :  %d\n",i,j, Ackerman(i, j));
}

