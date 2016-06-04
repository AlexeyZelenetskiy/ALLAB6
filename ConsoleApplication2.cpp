// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>


int _tmain(int argc, _TCHAR* argv[])
{
	printf("1 2 5 7 ");
	for(int i=11; i<=999; i++)
	 if ((i%2!=0) && (i%3!=0) && (i%5!=0) && (i%7!=0))
	 {
		printf("%d", i);
		printf("  ");
	 }
	system("PAUSE");
	return 0;
}

