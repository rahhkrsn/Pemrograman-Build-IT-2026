#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int valA = *(const int *)a;
    int valB = *(const int *)b;
    if (valA < valB) return -1;
    if (valA > valB) return 1;
    return 0;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    
    qsort(a, n, sizeof(int), compare);
    
    long long total_pasangan = (long long)n * (n - 1) / 2;
    long long pasangan_sama = 0;
    
    long long frekuensi = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            frekuensi++;
        } else {
            pasangan_sama += frekuensi * (frekuensi - 1) / 2;
            frekuensi = 1; 
        }
    }
    pasangan_sama += frekuensi * (frekuensi - 1) / 2;
    
    long long hasil = total_pasangan - pasangan_sama;
    
    long long MOD = 1000000007;
    hasil = hasil % MOD;
    
    printf("%lld\n", hasil);
    
    free(a);
    return 0;
}