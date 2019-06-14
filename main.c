#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

/*PROTOTYPE: Mengenalkan Fungsi ke Program Jika beda File
  float triangle (int a, int  t);
*/
// FUNGSI KOTAK
float kotak (float s)
{
    //Atau langsung ditulis
    return (s*s);
}

//FUNGSI LINGKARAN
float circle (float r)
{
    //Atau langsung ditulis
    return (3.14*r*r);
}
//FUNGSI SEGITIGA
float triangle (float a, float  t)
{
/* OR WAY
    float hasil;
    hasil = a*t/2;
    return hasil;
*/
    //Atau langsung ditulis
    return (a*t/2);
}

// MAIN
int main(){
float skotak, rcircle,htriangle,wtriangle, arsir;
    printf("======================== HITUNGAN YUK BY DICKY IBROHIM =======================\n\n");
printf ("Input Sisi Kotak          = ");
scanf ("%f",&skotak);
printf ("Input Jari-jari lingkaran = ");
scanf ("%f",&rcircle);
printf ("Input Tinggi Segitiga     = ");
scanf ("%f",&htriangle);
printf ("Input alas                = ");
scanf ("%f",&wtriangle);
// PROCESS
arsir = circle(rcircle) - triangle(htriangle,wtriangle);
// OR AGAR DI PRINT F TIDAK USAH NULIS RUMUS
// a = triangle (height,width);
// shade = circle(rcircle) - triangle(htriangle,wtriangle)
    printf("\n\n");
    printf("======================== HITUNGAN YUK BY DICKY IBROHIM =======================\n\n");
    printf("======================== ----------------------------- =======================\n\n");
    printf("Hasil (AREA) Luas Lingkaran - Luas segitiga = \n");
    printf("Hasil (AREA)  %.2f        - %.2f           = %.2f\n", circle(rcircle), triangle(htriangle,wtriangle), arsir);
     printf("----------------------- ----------------------------- ------------------------\n\n");
    return 0;
}








/*
#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

//FUNGSI
int pengurangan (int a, int b)
{
    int hasil;
    hasil =a-b;
    return hasil;
}

// MAIN
int main()
{
    printf("Hasil pengurangan 5 - 2 = %d", pengurangan(5,2));
    return 0;
}

*/
