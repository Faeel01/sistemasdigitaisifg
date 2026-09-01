#include<stdio.h>
int fat;
int fatorial(int x);
int main(){
    int num;
    printf("Digite o valor para ver o fatorial: ");
    scanf("%d", &num);
    printf("%d", fatorial(num));
    return 0;
}

int fatorial(int x){
    fat=1;
    for(int i=1;i<=x;i++){
        fat = fat*i;
    }
    return fat;
}