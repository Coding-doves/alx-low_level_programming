#!/bin/bash
#include <stdio.h>

/* to print sizeof, the printing format could be %zu or %lu */

char a;
int a;
long int a;
long long int a;
float a;

int main(void){
	printf("Size of a char: %lu", sizeof(a));
	printf("Size of a int: %Zu", sizeof(a));
	printf("Size of a long int: %Zu", sizeof(a));
	printf("Size of a long long int: %lu", sizeof(a));
	printf("Size of a float: %lu", sizeof(a));

	return 0;
}
