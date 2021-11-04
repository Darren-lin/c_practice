#include <stdio.h>

int main() {
    int num;
    int arr[10];
    printf("inputs:\n");
    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++){
        scanf("%d", &arr[i]);
    }
    printf("\noutputs:\n");
    for(int i = 0; i < (sizeof(arr)/sizeof(int)); i++){
        if(arr[i] % 2 == 0){
            printf("%d is even\n", arr[i]);
        }
        else{
            printf("%d is odd\n", arr[i]);
        }
    }
    return 0;
}