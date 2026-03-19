#include <stdio.h>

void cont(int n) {
    if (n > 5){
        return;
    }

    printf("%d\n", n);
    cont(n + 1);
}

int main(){
    cont(1);
    return 0;
}