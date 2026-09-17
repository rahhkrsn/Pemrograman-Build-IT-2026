#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a, b, c;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) {
        return 0;
    }
    long long x = a, y = b, z = c;
    long long temp;
    
    if (x > y) {temp = x; x = y; y = temp;}
    if (y > z) {temp = y; y = z; z = temp;}
    if (x > y) {temp = x; x = y; y = temp;}
    
    long long selisih1 = y - x;
    long long selisih2 = z - y;
    long long jumlahronde = (selisih1 < selisih2) ? selisih1 : selisih2;
    
    printf("%lld", jumlahronde);
    
    return 0;
}   

