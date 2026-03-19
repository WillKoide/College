#include  <stdio.h>

int soma(int v[], int n){
    if(n == 0) {
        return 0;
    }

    return v[n - 1] + soma(v, n - 1);
}

int main() {
    int n, i;

    printf("Quantos elementos deseja inserir? ");
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Soma: %d\n", soma(v, n));

    return 0;
} 