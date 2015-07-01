#include <stdio.h>
#include <iostream>

int main () { 
	int a=16, b=22;
	double c=10.0, d=234.52;
	printf ("\nAdresse von a = %u ", &a); 
	printf ("Wert von a = %i ", a); 
	printf ("\nAdresse von b = %u ", &b);
	printf ("Wert von b = %i ", b);
	printf("\nAdresse von c = %u ", &c); 
	printf("Wert von c = %f ", c);
	printf ("\nAdresse von d = %u ", &d);
	printf ("Wert von d = %f\n", d); 

	system("PAUSE");
}