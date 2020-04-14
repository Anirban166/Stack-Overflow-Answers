// link: https://stackoverflow.com/questions/60226543/c-usual-arithmetic-conversions-not-converting/60227214#60227214

unsigned int x = 4000000000;

signed int y = -1;
signed long z = x + y;
printf("x + y = %ld\n", z);

signed int x = 4000000000;
int y = -1;
long z = x + y;
printf("x + y = %ld\n", z);

x + y = -294967297
