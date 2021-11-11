#include <stdio.h>
#include <string.h>
void reverse ()
{
	int num ;
    char str[num];
    printf (" Enter a string to be reversed: \n");
    scanf ("%s", str);
    printf ("  After the reverse of a string: %s ", strrev(str));
}
int main()
{
   reverse();
    return 0;
}
