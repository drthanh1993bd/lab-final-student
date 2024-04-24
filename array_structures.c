#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define SIZE 19

// define your struct here


// function prototype to print the movie closest to avg time without going over goes here


int main() {
	FILE * input;
	char buffer[256];
	input = fopen("pixar.txt", "r");
	// declare your array of structures and any other needed variables here
	

	while (fgets(buffer, 256, input) != NULL) {
		//fill in the array of structures here
		
	}

    // call the print function here
    	

	// free any malloced memory here
	

	fclose(input);
	return 0;
}

//define the function to print the movie closest to avg time without going over here
