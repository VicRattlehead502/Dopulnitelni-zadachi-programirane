#include <stdio.h>
//guysfhbjgyut
//x sushtestvuva samo vuv funkciqta square

double square(double x)
{
    double y = x*x;
    return y;

    // kogato se izpulni funkciqta tq poluchava stoinostta na returnnatoto
}

int main()
{
// d v tozi sluchai oznachava double zashtoto x ochakva double (v skobite se dava stoinost na x)
// promenlivata y poluchava stoinostta na funkciqta square
    double y = square(4.5d);
    printf("%.2lf \n", y);

    y = square(5.0d);
    printf("%.2lf \n", y);

// funkciq moje da se izpolzva navsqkude kudeto moje da se izpolzva promenliva ako ima neobhodimiq tip
    printf("%.2lf \n", square(67));

//typecast na stoinostta na funkciqta
    printf("%d \n", (int)square(21));

    return 0;
}
