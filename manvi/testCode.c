#include<stdio.h>

int main(int argc, char **argv)
{
	char **items;
	int j=3,i;
	items = argv;
	for(i=1; (i%4); i++)
	{
		int **p = &items[j];
		printf("%c",**p);
		j--;
	}
	return 0;
	
}
/*int main( int argc, char *argv[] )
{
	if( argc == 2 ) {
		printf("The argument supplied is %s\n",argv[1]);
	}
	else if( argc > 2 ) {
		printf("Too many arguments supplied.\n");
	}
	else {
		printf("One argument expected.\n");
	}
}*/
