#include <stdio.h>

main()
{
    int celsius = 0,
        upper = 300,
        step = 20;
    float fahr;

    while(celsius <= upper){
        fahr = (9/5.0) * celsius + 32;
        printf("%4d %6.1f\n", celsius, fahr);
        celsius = celsius + step ;
    }
}
