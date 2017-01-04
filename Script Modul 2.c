#include<stdio.h>
main()
{
    char hasilujian='B' ;
    switch (hasilujian)
 {  case 'A':
        printf("Sangat Baik\n");
        break;
    case 'B':
        printf("Baik\n");
        break;
    case 'C':
        printf("Lumayan\n");
        break;
    case 'D':
        printf("Opo Wi\n");
        break;
    case 'F':
        printf("Gagal\n");
        break;
    default :
        printf("Gagal\n");
}
    printf("Nilai Anda Adalah %c\n",hasilujian);
    return 0;
}
