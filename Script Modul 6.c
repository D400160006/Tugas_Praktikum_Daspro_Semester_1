#include <stdio.h>
int main()
{
    int i,j,MatriksA[2][2],MatriksB[2][2],Hasil[2][2];
    printf("rogram Perkalian Matriks (Ordo 2x2\n\n");
    printf("Silahkan Input MatriksA\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
    {
        printf("Element ke[%d][%d]=",i,j);
        scanf ("%d",&MatriksA[i][j]);
    }
}
printf("\n");
printf("Silahkan Input MatriksB\n");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
    {
        printf("Element ke[%d][%d]=",i,j);
        scanf ("%d",&MatriksB[i][j]);
    }
}
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
    {Hasil[i][j]=(MatriksA[i][0]*MatriksB[0][j])+(MatriksA[i][0]*MatriksB[0][j]);}
}
printf("Hasil Perkalian Matriks");
for(i=0;i<2;i++)
{ for(j=0;j<2;j++)
  printf("%d \t ",Hasil[i][j]);
  printf("\n");
}
return 0;
}
