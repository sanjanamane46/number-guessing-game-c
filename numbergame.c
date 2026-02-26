#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int guess;
	srand(time(0));
	int random_no = (rand()%1000)+1;
	printf("\nHello!Welcome to the guessing game!\n");
	printf("\nplease guess your number:\n");
	while(1){
		scanf("%d",&guess);
		if(guess==random_no){
		    printf("\nExcellent!Your guess is correct!\n");
	    }
		else if(guess>random_no){
			printf("\nyour guess was wrong! please guess lower number:\n");
		}
		else{
			printf("\nyour guess was wrong! please guess upper number:\n");
	    }
	}
	return 0;
}