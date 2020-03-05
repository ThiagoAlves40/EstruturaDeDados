#include<stdio.h>
#include<stdlib.h>

int main(){
    int v [30];
    int i, soma, media;

    for(i=0;i<30;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &v[i]);
    }
    for(i=0;i<30;i++)
    
		soma += v[i];
    	media = soma/30;
    
    printf("\n a media eh:%d \n",media);
    
    return 0;
}
