#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i;
    long long total = 0;
    scanf("%d", &i);
    
    for (int j = 0; j < i; j++){
        long long k;
        scanf("%lld", &k);
        total += k;
    }
    if (total < 0) {
        total = -total;
    } 
    printf("%lld", llabs(total));
    return 0;
}
