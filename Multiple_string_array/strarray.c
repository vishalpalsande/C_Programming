/******** Input :

 vishal  hp-laptop-15q-bu0xx  ../c/Multiple_string_array  ./run
Enter strings:
MI
CSK
KKR
KXIP
DC
Q

********* OUTPUT:

NUMBER OF MATCHES: 10
------Matches Are Follows: 
MI VS CSK
MI VS KKR
MI VS KXIP
MI VS DC
CSK VS KKR
CSK VS KXIP
CSK VS DC
KKR VS KXIP
KKR VS DC
KXIP VS DC
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[10][10];
    int i=0;
    printf("Enter Team names:\n");

    for(i=0;i<10;i++)
    {
        scanf("%s",str[i]);

        if(strcmp(str[i],"Q") == 0)
            break;
    }

    printf("\nNUMBER OF MATCHES: %d\n\nMatches Are Follows: \n",((i)*(i-1))/2);
    
    for(int j=0;j<i-1;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            printf("%s VS %s\n",str[j],str[k]);
        }
    }

    return 0;
}
