// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Escreva um programa que leia um array de 10 inteiros e o imprima em ordem inversa. Elemento Máximo e Mínimo:
    int i, res, temp, max, min, sum = 0, pares, impares;
    
    //int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (i=0; i<5; ++i){
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    
    for (i=0; i<10; ++i){
        printf("%d ", arr[i]);
    }
    
    //retorne o maior valor de um array
    int len = sizeof(arr) / sizeof(arr[0]);
    max = arr[0];
    min = arr[0];
    
    for (i=0; i<10; ++i){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    printf("\nMax: %d\n", max);
    
    //Retorne o menor valor de um array
    for (i=0; i<10; ++i){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    
    printf("Min: %d\n", min);

    //Escreva um programa que leia um array de 10 inteiros e conte quantos são pares e quantos são ímpares. Imprima os resultados.
    for (i=0; i<10; ++i){
        if(arr[i]%2==0){
            pares = arr[i];
            printf("Par: %d ", pares);
        }else{
            impares = arr[i];
            printf("Impar: %d ", impares);
        }
    }
    
    //Escreva um programa que copie os elementos de um array para outro array e o imprima.
    printf("\n");
    int arr2[10];
    
    printf("array2: ");
    for (i=0;i<len;++i){
        arr2[i] = arr[i];
        printf("%d ", arr2[i]);
    }
    
    //Some todos os valores de um array
    printf("\nSoma: ");
    for(i=0;i<len;++i){
        sum += arr[i];
    }
    printf("%d\n", sum);
    
    return 0;
}