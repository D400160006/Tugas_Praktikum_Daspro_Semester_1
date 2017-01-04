#include<stdio.h>
    int h1,h2,h3;
    int total;
    int z1,z2,z3;
    char b1[200];
    char b2[200];
    char b3[200];
    int Discount;

    int total_bayar;
    int harga1,harga2,harga3;
    float d;
void input()
{
    printf (" barang yang dibeli : \n");
    printf ("\n 1. produk \t: ");
    scanf ("%s",&b1);
    printf ("\n    jumlah \t: ");
    scanf ("%d",&z1);
    printf ("\n    harga \t: ");
    scanf ("%d",&h1);
    printf ("\n 2. produk \t: ");
    scanf ("%s",&b2);
    printf ("\n    jumlah \t: ");
    scanf ("%d",&z2);
    printf ("\n    harga \t: ");
    scanf ("%d",&h2);
    printf ("\n 3. produk \t: ");
    scanf ("%s",&b3);
    printf ("\n    jumlah \t: ");
    scanf ("%d",&z3);
    printf ("\n    harga \t: ");
    scanf ("%d",&h3);
    harga1=z1*h1;
    harga2=z2*h2;
    harga3=z3*h3;

}

void totalbayar()
{
    total=harga1+harga2+harga3;
    printf (" total : %d \n",total);
    printf ("\n Discount : ");
    scanf("%f",&d);
    Discount=total*(d/100);
    printf (" Discount : %d \n",Discount);
    total_bayar=total-Discount;
    printf(" total bayar :%d \n",total_bayar);
}

void isi()
{
    printf(" no. nama produk jumlah harga (Rp)\n");
    printf(" 1.  %s \t  %d    %d \n",b1,z1,harga1);
    printf(" 2.  %s \t  %d    %d \n",b2,z2,harga2);
    printf(" 3.  %s \t  %d    %d \n",b3,z3,harga3);

}

void judul()
{
    printf (" \n \n \n ");
    printf ("       Selamat Berbelanja \n");
    printf ("       Minimarket sukamundur\n");
    printf (" ---------------------------------\n");

}

void baris()
{
    printf (" ---------------------------------\n");
}

void penutup()
{
    printf (" ---------------------------------\n");
    printf ("            Terima Kasih \n");
    printf ("        Barang yang sudah dibeli \n");
    printf ("        tidak dapat dikembalikan \n \n \n \n");
}
void main()
{
    input();
    system("cls");
    judul();
    isi();
    baris();
    totalbayar();
    penutup();
}
