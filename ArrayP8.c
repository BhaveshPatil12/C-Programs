#include <stdio.h>
int main()
{   
char abc[3][2]= {
           {'a', 'e'},
           {'i', 'o'},
           {'u', 'j'}
};   
char i,j;  
for(i=0;i<3;i++)
{
printf("\n");         
for(j=0;j<2;j++) 
printf("%c\t",abc[i][j]);
}   
return 0;
}