#include <stdio.h>

int main(void){
	
	int A,B,C;
	scanf("%d%d%d", &A, &B, &C);
	
	if(B>=C) printf("-1");
	else printf("%d",A/(C-B)+1);
	
	
	return 0;
}

//printf에 바로 수식을 넣으면 안돌아가나...???? 
