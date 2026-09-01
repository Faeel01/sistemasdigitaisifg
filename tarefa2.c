#include<stdio.h>

int soma(int x, int y, int z);
float media();

int main(){
    int a = 10, b = 20, c = 30;
    printf("Soma: %d\n", soma(a, b, c));
    printf("Media: %.2f\n", media(a, b, c));
}

int soma(int x, int y, int z){
    return x+y+z;
}   
float media(int x, int y, int z){
    return soma(x, y, z)/3;
}