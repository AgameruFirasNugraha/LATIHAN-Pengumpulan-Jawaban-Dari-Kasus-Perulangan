#include <stdio.h>

int main() {
    int batas, total = 0;

    printf("masukkan batas maksimal: ");
    scanf("%d", &batas);

    for(int i = 1; i <=batas; i++) {
        total += i;
        printf("%d", i);

        if(i < batas) {
            printf(" + ");
        }
    }
    printf(" = %d\n", total);
    
    return 0;
}
