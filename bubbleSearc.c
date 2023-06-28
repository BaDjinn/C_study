#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	int i,swap,aux;
	int deb;
	//printf("debug: %lu \n", sizeof(numbers)/sizeof(float));
	deb = sizeof(numbers)/sizeof(float);
	//printf("deb: %d \n", deb);
	do
	{
	   swap = 0;
	   for (i=0;i<deb-1;i++){
	       //printf("i= %f i+1= %f \n", numbers[i], numbers[i+1]);
	       if (numbers[i]<numbers[i+1]){
	           float aux = numbers[i];
	           numbers[i]=numbers[i+1];
	           numbers[i+1]=aux;
	           swap=1;
	       }
	   for (i=0;i<10;i++){
	       printf("%0.2f ", numbers[i]);
	   }
	   printf("\n");
	   }
	   
	}while(swap);
	
	for (i=0;i<10;i++){
	       printf("%0.2f ", numbers[i]);
	   }
	   printf("\n");
	   
	return 0;
}
