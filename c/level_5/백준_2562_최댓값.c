#include <stdio.h>

int main(void){
	
	int i, j;
	int max=0;
	int k=0;
	int num[9];
	for(i=0;i<=8;i++){
		scanf("%d", &num[i]);
	}
	for(j=0;j<=8;j++){
		if(max<num[j]){
			max=num[j];
			k=j+1;
		}
	}
	printf("%d\n%d", max, k);
	
	return 0;
}
