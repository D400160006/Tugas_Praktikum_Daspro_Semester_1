#include<stdio.h>
int main()
{
  int A[2][2][2] = {(0,1,0,2),(1,2,1,3)};
  int i,j,z;
  for (i=0; i<2; i++)
  {
      for (j=0; j<2; j++)
      {
          for (z=0; z<2; z++)
          {
              printf ("Nilai A[%d][%d][%d]=%d\n",i,j,z,A[i][j][z]);
          }
      }
  }
return 0;
}
