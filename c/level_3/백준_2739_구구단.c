#include <stdio.h>

int main(){
	
	int num;
	int i;
	scanf("%d", &num);
	for(i=1;i<10;++i){
		printf("%d * %d = %d\n", num, i, num*i);
	}
	
	return 0;
} 

//전위전산자 ++i : 값이 먼저 증가한 후 작업이 수행됨
//후위전산자 i++ : 작업을 수행한 후 값이 증가 
