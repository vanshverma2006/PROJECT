#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("num of digits :: ");
    scanf("%d", &n);

    int array[n], finalAns = 0;

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    for (int i = 0; i < n; i++) {
        finalAns += array[n - i - 1] * (int)pow(2, i);  
    }

    printf("Decimal: %d\n", finalAns);

    return 0;
}