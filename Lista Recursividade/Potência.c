#include <stdio.h>

int potencia(int base, int exp){
    if (exp == 0){
        return 1;
    }

    return base * potencia(base, exp - 1);
}

int main(){
    int base, exp;

    printf("Digite o valor da base: \n");
    scanf("%d", &base);

    printf("Digite agora o valor do expoente: \n");
    scanf("%d", &exp);

    printf("Resultado: %d\n", potencia(base, exp));

    return 0;
}