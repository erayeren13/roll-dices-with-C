#include<stdio.h>

#include<time.h>
void main()
{
int i, a1[100],a2[100],asum[100],one=0, two=0, three=0, four=0, five=0, six=0, one2=0, two2=0, three2=0, four2=0, five2=0, six2=0 ;
srand(time(NULL));

printf("FIRST ROLL");
printf("\n");printf("\n");

for(i = 0; i <100; i++)
{
a1[i] = rand() % 6 + 1;

if(a1[i]==1)
one++;

else if(a1[i]==2)
two++;

else if(a1[i]==3)
three++;

else if(a1[i]==4)
four++;

else if(a1[i]==5)
five++;

else
six++;

printf(" %d. roll :%d  \n",i+1,a1[i]);
}
printf("\n");

printf("%d times 1\n",one);
printf("%d times 2 \n",two);
printf("%d times 3 \n",three);
printf("%d times 4 \n",four);
printf("%d times 5 \n",five);
printf("%d times 6 \n",six);
printf("\n");




printf("\n");
printf("\n");
printf("SECOND ROLL");
printf("\n");printf("\n");
for(i = 0; i <100; i++)
{
a2[i] = rand() % 6 + 1;

if(a2[i]==1)
one2++;

else if(a2[i]==2)
two2++;

else if(a2[i]==3)
three2++;

else if(a2[i]==4)
four2++;
else if(a2[i]==5)
five2++;

else
six2++;

printf(" %d. roll :%d  \n",i+1,a2[i]);
}
printf("\n");

printf("%d times 1\n",one2);
printf("%d times 2 \n",two2);
printf("%d times 3 \n",three2);
printf("%d times 4 \n",four2);
printf("%d times 5 \n",five2);
printf("%d times 6 \n",six2);
printf("\n");



printf("\n");
printf("THE SUMS OF THE FACES\n\n");
for(i=0;i<100;i++)
{
    asum[i]=a1[i]+a2[i];
    printf(" %d. roll :%d  \n",i+1,asum[i]);
}



}
