#include <stdio.h>
#include <time.h>
typedef int boolean;
#define true 1
#define false 0

int main(){
	clock_t start,end;
	int prime, i;
	scanf("%d",&prime);
	boolean flag = true;
	start=clock();
	for(i = 2; i < prime; i++){
		if(prime % i == 0){
			flag = false;
		}
	}
	end = clock();
	if(flag){
		printf("Prime ---Time : %lu\n",(end-start)/CLOCKS_PER_SEC);
		return 0;
	}
	printf("Prime ---Time : %lu\n",(end-start)/CLOCKS_PER_SEC);
	return 0;
}