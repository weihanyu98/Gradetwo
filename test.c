#include <stdio.h>
#include <assert.h>
#include "eval.h"

int main()
{
    char line[20];
    scanf("%s",line);
    printf("%d",eval(line));
	//assert(12==eval(line));
} 
