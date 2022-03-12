#include <stdio.h>

enum year {jan = 1, feb, mar, apr, may, june, july, aug, sep, oct, nov, dec};

int main()
{
    printf("jan=%d\nfeb=%d\njune=%d\ndec=%d\n", jan, feb, june, dec);
    
    return 0;
}