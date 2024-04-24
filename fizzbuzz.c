#include <stdio.h>

int main() {
	//your code goes here.

	for(int i = 1; i < 100 ; i++){
	if(i % 3 == 0 && i % 7 == 0){
		printf("FizzBuzz\n");
	}
	else if(i % 3 == 0){
		printf("Fizz\n");
	} 
	else if(i % 7 == 0){
		printf("Fizz\n");
	}
	else{
		printf("%d\n");
	}
	}
	return 0;
}
