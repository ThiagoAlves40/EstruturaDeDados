#include<stdio.h>
#include<stdlib.h>

int main(){
    int v [40];
    int i, j, k, aux;

    for(i=0;i<40;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(k=0;k<40;k++){
    	for(j=k;j<40;j++)
    		if(v[k] > v[j]) { 
        		aux = v[k];
				v[k] = v[j];
				v[j] = aux;	
		
		}
	}
		for(i=0;i<40;i++){
			printf("\n%d\n", v[i]);
}
	return 0;	
}
