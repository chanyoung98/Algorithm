#include <stdio.h>

int main(void){
	
	int i, num, A, B;
	scanf("%d\n", &num);
	for(i=1;i<=num;i++){
		scanf("%d%d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
	}
	return 0;
}
