#include "main.h"
/**
 */
int i;
int main(int argc, char* argv[])
{
	for (i = 0; i < argc; i++)
	{
        printf("%s\n", argv[i]);
    }
return (0);
}
