#include <stdio.h>
#include <windows.h>
    int a,b,c,d,e,f,rumah,wp,ljt,i,j;
    int jumlah,panjang[7],lebar[7],waktu[7],ruang,totaldaya[7],panel;
    float daya[7],n[7];
    int intensitass[7]={0,600,600,470,1400,470,600};
    int lux[7]={0,60,60,140,130,150,60};
    char ruangan[7][20]={"-","Teras","Ruang Dapur","Ruang Keluarga","Ruang Tidur","Ruang Tamu","Kamar Mandi"};
void main()
{
    for(a=0;a<=20;a++)
    {
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------LOADING PROGRAM---------------------------------------------------------\n");
        printf("------------------------------------------------------%d----------------------------------------------------------------\n",a*5);
        printf("---------------------------------------------------PROBLEM 1------------------------------------------------------------");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

        Sleep(500);
        system("cls");
    }
    printf("Masukkan Jumlah Ruangan:");

Sleep(2000);
system("cls");
printf("Pilihan:\n");
    for(a=1;a<=6;a++)
    {
        printf("%d.%s\n",a,ruangan[a]);
    }
    printf("Pilih Ruangan:");
    scanf("%d",&ruang);
    system("cls");

    if(ruang==1)
    {printf("%s\n",ruangan[1]);
    printf("Masukkan Panjang Ruangan:");
    scanf("%d",&panjang[1]);
    printf("Masukkan Lebar Ruangan:");
    scanf("%d",&lebar[1]);
    printf("Masukkan Lama Waktu:");
    scanf("%d",&waktu[1]);
    n[1]=(lux[1]*panjang[1]*lebar[1])/(intensitass[1]*0.7*0.6*1);
    daya[1]=n[1]*waktu[1]*7;
    system("cls");}

    for(a=1;a<=6;a++)
    {
        printf("%d.%s\n",a,ruangan[a]);
    }
    printf("Pilih Ruangan:");
    scanf("%d",&ruang);
    system("cls");

    if(ruang==2)
    {printf("%s\n",ruangan[2]);
    printf("Masukkan Panjang Ruangan:");
    scanf("%d",&panjang[2]);
    printf("Masukkan Lebar Ruangan:");
    scanf("%d",&lebar[2]);
    printf("Masukkan Lama Waktu:");
    scanf("%d",&waktu[2]);
    n[2]=(lux[2]*panjang[2]*lebar[2])/(intensitass[2]*0.7*0.6*1);
    daya[2]=n[2]*waktu[2]*7;
    system("cls");}

    for(a=1;a<=6;a++)
    {
        printf("%d.%s\n",a,ruangan[a]);
    }
    printf("Pilih Ruangan:");
    scanf("%d",&ruang);
    system("cls");

    if(ruang==3)
    {printf("%s\n",ruangan[3]);
    printf("Masukkan Panjang Ruangan:");
    scanf("%d",&panjang[3]);
    printf("Masukkan Lebar Ruangan:");
    scanf("%d",&lebar[3]);
    printf("Masukkan Lama Waktu:");
    scanf("%d",&waktu[3]);
    n[3]=(lux[3]*panjang[3]*lebar[3])/(intensitass[3]*0.7*0.6*1);
    daya[6]=n[3]*waktu[3]*7;
    system("cls");}

    for(a=1;a<=6;a++)
    {
        printf("%d.%s\n",a,ruangan[a]);
    }
    printf("Pilih Ruangan:");
    scanf("%d",&ruang);
    system("cls");

    if(ruang==4)
    {printf("%s\n",ruangan[4]);
    printf("Masukkan Panjang Ruangan:");
    scanf("%d",&panjang[4]);
    printf("Masukkan Lebar Ruangan:");
    scanf("%d",&lebar[4]);
    printf("Masukkan Lama Waktu:");
    scanf("%d",&waktu[4]);
    n[4]=(lux[4]*panjang[4]*lebar[4])/(intensitass[4]*0.7*0.6*1);
    daya[4]=n[4]*waktu[4]*7;
    system("cls");}

    for(a=1;a<=6;a++)
    {
        printf("%d.%s\n",a,ruangan[a]);
    }
    printf("Pilih Ruangan:");
    scanf("%d",&ruang);
    system("cls");

    if(ruang==5)
    {printf("%s\n",ruangan[5]);
    printf("Masukkan Panjang Ruangan:");
    scanf("%d",&panjang[5]);
    printf("Masukkan Lebar Ruangan:");
    scanf("%d",&lebar[5]);
    printf("Masukkan Lama Waktu:");
    scanf("%d",&waktu[5]);
    n[5]=(lux[5]*panjang[5]*lebar[5])/(intensitass[5]*0.7*0.6*1);
    daya[5]=n[5]*waktu[5]*7;
    system("cls");}



    for(a=1;a<=6;a++)
    {
        printf("%d.%s\n",a,ruangan[a]);
    }
    printf("Pilih Ruangan:");
    scanf("%d",&ruang);
    system("cls");

    if(ruang==6)
    {printf("%s\n",ruangan[6]);
    printf("Masukkan Panjang Ruangan:");
    scanf("%d",&panjang[6]);
    printf("Masukkan Lebar Ruangan:");
    scanf("%d",&lebar[6]);
    printf("Masukkan Lama Waktu:");
    scanf("%d",&waktu[6]);
    n[6]=(lux[6]*panjang[6]*lebar[6])/(intensitass[6]*0.7*0.6*1);
    daya[6]=n[6]*waktu[6]*7;
    system("cls");}

    printf("Masukkan Tipe Wp Panel Surya Yang Digunakan:");
    scanf("%d",&wp);
    printf("Panel Surya Dibebani Berapa Rumah");
    scanf("%d",&rumah);
    panel=wp*rumah*5*1.5;
    system("cls");
    for(a=1;a<=6;a++)
    {

        printf("Nama Ruangan:%s\n",ruangan[a]);
        printf("Lux:%d\n",lux[a]);
        printf("intensitas cahaya:%d\n",intensitass[a]);
        printf("Panjang X Lebar:%dx%d\n",panjang[a],lebar[a]);
        printf("Waktu:%d\n",waktu[a]);
        printf("Jumlah Titik Lampu:%.0f\n",n[a]);
        printf("Daya Total:%.0f\n\n",daya[a]);


    }
    printf("Jumlah Panel Surya Yang Dibutuhkan:%d",panel);
}
