#include <stdio.h>
#include <stdlib.h>

int is_prime(long long i);

int main(int argc, char *argv[]){
        if(argc == 2)
                is_prime(atol(argv[1]));
        else printf("to many or to less arguments\n");
}
int is_prime(long long i){
        int z = 0;
        if(i >= 2 && !(i == 2 || i == 3)){ 
		for(long long k = 2; k <= (i/2); k++){
        		if((i%k) == 0){
        			z++;
				break;
                	}
        	}
	}	
        if(z == 0 && i >= 2){
        	printf("%lld is prime\n",i);
                return 1;
        }
        else printf("%lld is no prime\n",i);
        return 0;
}
