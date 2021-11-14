#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// mono alphabetic alogorithim for encryption , decryption
char* enqrypt(char arr[] )
{
char input[27]="abcdefghijklmnopqrstuvwxyz";//an array to transfer each letter to its coressponding decrypted letter
char secret[27]="eyfqwdtcrjbganxoilzmpshkvu";// array of letter in decrypted form
	for (int i=0;i<sizeof(arr);i++) // a loop  to check each letter of the array
	{
		for (int j=0 ;j<27;j++)
		{
			if (arr[i]==input[j])
			{
				arr[i]=secret[j]; //transfer each letter from the original alphabet to its coressponding decrypted one
				break;
			}
		}
	}
	return arr;
}
char* deqrypt(char arr[] ) // same function but used for decryption
{
	char input[27]="abcdefghijklmnopqrstuvwxyz";
	char secret[27]="eyfqwdtcrjbganxoilzmpshkvu";
	for (int i=0;i<sizeof(arr);i++)
	{
		for (int j=0 ;j<27;j++)
		{
			if (arr[i]==secret[j])
			{
				arr[i]=input[j]; //  reverse encryption
				break;
			}
		}
	}
	return arr;
}
int main(){
	int v=90;
	while (v!=0) // looop to show the menu to the user unless the user chooses "0" it ends the program
	{
	printf("Enter your process :\n");
	printf("enter '1' to Encrypt\nenter '2' to decrypt\nenter '0' to exit\n");
	scanf("%d",&v);
	if (v==1){ // if the user chooses "1" it  calls the function used for encryption
	char m[10000]="/0";
	printf("Enter the string to be enqrypted :\n");
	scanf("%s",&m);
	printf("%s\n",enqrypt(m));
}
	if (v==2){ // if the user chooses "2" it  calls the function used for decryption
	char o[10000]="/0";
	printf("Enter the string to be deqrypted :\n");
	scanf("%s",&o);
	printf("%s\n",deqrypt(o));
}
}
}
