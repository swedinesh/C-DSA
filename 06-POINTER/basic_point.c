#include<stdio.h> 

int main() {

int i=3, *j, **k;
j = &i;
k = &j;

printf("First\n");
printf("%u\n",&i);
printf("%d\n",j);
printf("%d\n",*k);
printf("%d\n",&j);
printf("%d\n",k);

printf("Second\n");
printf("%d\n",&k);
printf("%d\n",j);
printf("%d\n",k);
printf("%d\n",i);

printf("Third\n");
printf("%d\n",*(&i));
printf("%d\n",*j);
printf("%d\n",**k);

return 0;
}