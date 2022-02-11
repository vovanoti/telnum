#include <stdio.h>
#include <stdlib.h>

int digitcheck(char ch);
void displayout(int *s, int n);
void checkout (int *s, int n);

int main(int argc, char *argv[]){
	//initialization
	char input[40];
	char* intemp;
	int n = 11;
	int output[n];
	int sizeout = n*(sizeof(output[0])/sizeof(output[0]));
	
	
	//getting a string
	while(1){
		printf("Enter the number: ");
		intemp = fgets(input, 40, stdin);
		if (intemp == NULL)
			break;
	
		//filling output array
	
		int j=0;
		for (int i=0;i<sizeof(input);i++){
			if(digitcheck(input[i])){
				output[j] = input[i] - '0';
				j++;
				if(j==12){
					//checking output array
					
					//displayout(output, sizeout);
					
					//checkout (output, sizeout);
				}
			}
		}
		//show output array
		checkout (output, sizeout);
		printf("Your number is: ");
		displayout(output, sizeout);
		printf("\n");
	}
	printf("\n");
	return 0;
}


//is digit function
int digitcheck(char ch){
	for(int i=48; i<58; i++){
		if (ch == i)
			return 1;
	}
	return 0;
}

//display output array function
void displayout(int *s, int n){
	for (int m=0;m<n;m++){
		printf("%i",*(s+m));
	}
	exit;
}


void checkout (int *s, int n){
	
	if(*(s+0)==8){
		*(s+0)=7;
	}
	if(*(s+0)==9){
		//printf("*s-1 = %i\n",*(s+n-1));
		//printf("*s+n-i-1 = %i\n",*(s+n-1-1));
		//int tmp = *(s+n-1);
		for (int i=1; i<n; i++){
			*(s+n-i) = *(s+n-i-1);
		}
		*(s+0)=7;
	}
	exit;
}
