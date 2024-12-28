#include <stdio.h>


int sum(int a, int b);

int main(){

	int tong = sum(3, 8);
	printf("tong: %d ", tong);

	return 0;
}

int sum(int a, int b){
	return(a+b);
};
