#include <stdio.h>

/*symbolic constants are not variables. 
they are a character string representation 
of a value. Conventionally written in uppercase*/
#define LOWER 0
#define UPPER 300
#define STEP 20 

int main()
{

	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0)*(fahr-32));
	}

}
