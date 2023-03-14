#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x ;
    int y ;

    printf("x sayisini giriniz.\n");
    scanf("%d",&x);

    printf("y sayisini giriniz.\n");
    scanf("%d",&y);

    if(x > y) {
       printf("x y'den buyuktur.");

    }else if( x == y) {

        printf("x ve y esittir.");


    }else {

    printf("x y'den kucuktur.");

    }

    return 0;
}
