#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,x ; // declaring variable for rows , coulmns
    printf("enter the number of rows: "); // asking user for rows required
    scanf("%d",&n); // taking input to be stored in rows variable
    printf("enter the number of coulmns: "); //asking for cpulmns required
    scanf("%d",&m); // taking input to be stored in coulmns variable
    int array[n][m]; // declaring an array
    int a,b;  // declaring variables  to be used in a loop
    for (a=0;a<n;a++)

        {
        	for(b=0;b<m;b++)
            {
                array[a][b]=array[a][b]%10 ; //  finding the modulus 10 of each index to make the number only from 0 to 9
                printf("%d ",array[a][b]) ;
            }

            printf("\n");
        }

    printf("enter the value of x  you  want to search for  :");
    scanf("%d",&x) ;
    for (a=0;a<n;a++)

    {
        for(b=0;b<m;b++)
        {
            if(x==array[a][b])
            	{
                printf("found the number %d in the array",x) ;
                goto label ;
                }
                  
        }
               
               
    }
    printf("didnt find the number %d in the array",x);
	label :
		return 0 ;
	



}
