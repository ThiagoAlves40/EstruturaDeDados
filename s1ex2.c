#include<stdio.h>
#include<stdlib.h>

int main(){
 
    int v [10];
    int i, maior=0;

    for(i=0;i<10;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0;i<10;i++){
            if(v[i]>maior){
                maior=v[i];
            }
        }
     printf("o maior valor eh %d", maior);
     
    return 0;
}
