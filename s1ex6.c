#include<stdio.h>
#include<stdlib.h>

int main(){
    int v1 [10], v2[]={0,0,0,0,0,0,0,0,0,0};
    int i,j,k=0,l=0;

    for(i=0;i<10;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &v1[i]);
    }
    
    v2[0]=v1[0];
	
    printf("\nvetor 3");
    
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(v1[i] == v1[j] && i!=j){
				v1[i] = 0;
				k++;
			}
		}
	}
	
	int v3[10-k];
		for(i=0;i<10;i++){
			if(v1[i] != 0 && l<i){
			v3[l]=v1[i];
			l++;
		}
	}
		
		for(i=0;i<10-k;i++){				
    		printf("\n[%d]\n",v3[i]);
	}
    
    return 0;
}
    
