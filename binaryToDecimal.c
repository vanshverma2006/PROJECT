#include <stdio.h>
#include <math.h>

int main() {
    int type;
    printf("enter value of redix : ");
    scanf("%d",&type);
    int n;
    printf("num of digits :: ");
    scanf("%d", &n);

    int array[n], finalAns = 0;

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

if (type==2){
    for (int i = 0; i < n; i++) {
        finalAns += array[n - i - 1] * (int)pow(2, i);   
    }

    printf("binary to Decimal: %d\n", finalAns);
}
else if(type==8){
    for (int i = 0; i < n; i++) {
        finalAns += array[n - i - 1] * (int)pow(8, i);   
    }

    printf("octal to Decimal: %d\n", finalAns);
}
else if(type==16){
    for (int i = 0; i < n; i++) {
        finalAns += array[n - i - 1] * (int)pow(3, i);   
    }

    printf("hexadecimal to Decimal: %d\n", finalAns);
}
else{
    for (int i = 0; i < n; i++) {
        finalAns += array[n - i - 1] * (int)pow(type, i);   
    }

    printf("Decimal: %d\n", finalAns);
}


    return 0;
}