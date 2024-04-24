#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define SIZE 19

// define your struct here
typedef struct 
{
	char * name;
	int year;
	int time;
}PixarMovie;


// function prototype to print the movie closest to avg time without going over goes here
int calculateAverage(PixarMovie*movies, int count){
	int total = 0;
	for (int i = 0; i < count; i++)
	{
		total += movies[i].time;
	}
	return total / count;
}

int main() {
	FILE * input;
	char buffer[256];
	input = fopen("pixar.txt", "r");
	// declare your array of structures and any other needed variables here
	assert (input != NULL);
	PixarMovie movies[SIZE];
	int count = 0;

	while (fgets(buffer, 256, input) != NULL) {
		//fill in the array of structures here
		movies[count].name = strdup(strtok(buffer, ","));
        movies[count].year = atoi(strtok(NULL, ","));
        movies[count].time = atoi(strtok(NULL, ","));
        count++;
		
	}

    // call the print function here
    	printClosestToAverage(movies, count);

    for (int i = 0; i < count; i++) {
        free(movies[i].name);
    }


	// free any malloced memory here
	for (int i = 0; i < count; i++)
	{
		free(movies[i].name);
	}
	free (movies);
	

	fclose(input);
	return 0;
}

//define the function to print the movie closest to avg time without going over here
void printClosestToAverage(PixarMovie*movies, int count){
	int average = calculateAverage(movies,count);
	int closestIndex =0;
	int closestDifference = abs(movies[0].time - average);
	for (int i = 0; i < count; i++)
	{
		int difference = abs(movies[i].time - average);
		if (difference < closestDifference)
		{
			closestIndex = i;
			closestDifference = difference;
		}
		
	}
	printf("%s(%d):%d minutues\n", movies[closestIndex].name,movies[closestIndex].year,movies[closestIndex].time);
	
}