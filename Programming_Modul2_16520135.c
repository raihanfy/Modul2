#include <stdio.h>

float tambah (float angka1, float angka2)
/* Fungsi untuk menghitung hasil penjumlahan dua angka*/
{
/*KAMUS LOKAL*/
// angka1, angka2 = float

/* ALGORITMA */
return(angka1 + angka2);
}

float kurang (float angka1, float angka2)
/* Fungsi untuk menghitung hasil pengurangan dua angka*/
{
/*KAMUS LOKAL*/
// angka1, angka2 = float

/*ALGORITMA*/
return(angka1 - angka2);
}

float kali (float angka1, float angka2)
/* Fungsi untuk menghitung hasil perkalian dua angka*/
{
/*KAMUS LOKAL*/
// angka1, angka2 = float

/* ALGORITMA */
return(angka1 * angka2);
}

float bagi (float angka1, float angka2)
/* Fungsi untuk menghitung hasil pembagian dua angka*/
{
/*KAMUS LOKAL*/
// angka1, angka2 = float

/* ALGORITMA */
return(angka1 / angka2);
}

float pangkat (float angka1, float angka2)
/* Fungsi untuk menghitung hasil angka1 pangkat angka2*/
{
/*KAMUS LOKAL*/
// angka1, angka2 = float

/* ALGORITMA */
int i, hasil;
hasil = 1;
for(i = 1;i <= angka2;i++)
{
    hasil=hasil * angka1;
    }
return hasil;
}

float integral (float a, float b, int n)
/* Fungsi untuk menghitung hasil integral tentu*/
{
/*KAMUS LOKAL*/
// a, b = float
// n = int

/* ALGORITMA */
#define f(x) 1/(1-x)    //Fungsi yang digunakan

float hasil,deltax,k;
int i;
hasil = 0;

deltax = (a-b)/n;

hasil = f(b)+f(a);

for (i = 1; i <= n-1; i++)
{
    k = b + i*n;
    hasil = hasil + 2*f(k);
    }
    hasil = hasil * deltax/2;
    return hasil;
}

//Main
int main()
{
int operasi,z;
float x,y,hasilop;
printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Pangkat\n6. Integral Tentu\n");
printf("Silahkan pilih operasi yang mau dilakukan (1-6)");
scanf("%d",&operasi);

if (operasi == 1)
{
   printf("Masukkan angka pertama : ");
   scanf("%f",&x);
   printf("Masukkan angka kedua : ");
   scanf("%f",&y);
   hasilop = tambah(x,y);

   printf("Hasilnya : %f",hasilop);
   return 0;
    }
else if (operasi == 2)
{
   printf("Masukkan angka pertama : ");
   scanf("%f",&x);
   printf("Masukkan angka kedua : ");
   scanf("%f",&y);
   hasilop = kurang(x,y);

   printf("Hasilnya : %f",hasilop);
   return 0;
    }
else if (operasi == 3)
{
   printf("Masukkan angka pertama : ");
   scanf("%f",&x);
   printf("Masukkan angka kedua : ");
   scanf("%f",&y);
   hasilop = kali(x,y);

   printf("%f",hasilop);
   return 0;
    }
else if (operasi == 4)
{
   printf("Masukkan angka pertama : ");
   scanf("%f",&x);
   printf("Masukkan angka kedua : ");
   scanf("%f",&y);
   hasilop = bagi(x,y);

   printf("%f",hasilop);
   return 0;
    }
else if (operasi == 5)
{
   printf("Masukkan angka pertama : ");
   scanf("%f",&x);
   printf("Masukkan angka kedua : ");
   scanf("%f",&y);
   hasilop = pangkat(x,y);

   printf("%f",hasilop);
   return 0;
    }
else if (operasi == 6)
{
   printf("Masukkan batas atas : ");
   scanf("%f",&x);
   printf("Masukkan batas bawah : ");
   scanf("%f",&y);
   printf("Masukkan jumlah sub interval : ");
   scanf("%f",&z);
   hasilop = integral(x,y,z);

   printf("Hasilnya : %f",hasilop);
   return 0;
    }
}