#include <stdio.h>
#include <time.h>

int is_prime(long long i);
int get_run_time();

#define START 100000000

int main(){
	long long z = 0;
	int w = 0;
	for(long long i = START; w<=10;i++){
		if(i >= 1 && !(i == 2 || i == 3 || i == 5 || i == 7)){
			for(long long k = 2; k<=9; k++){
				if((i%k) == 0){
					z++;
					break;
				}
			}
		}
		if(z == 0){
			if(is_prime(i) == 1){
				printf("%lld\n",i);
				w++;
			}
		}
		z = 0;
	}
	printf("%d seconds\n",get_run_time());
	return 0;		
}

int is_prime(long long i){
        int z = 0;
        if(i <= 1)
		return 0;
        else if(i == 2 || i == 3)
		return 1;
        for(long long k = 2; k <= (i/2); k++){
                       if((i%k) == 0){
				return 0;
                       }
                }
        return 1;
}

int get_run_time(){
	return clock()/CLOCKS_PER_SEC;
}
