#include<stdio.h>
int main(){
int n=10;
int *p=&n;
printf("This is n value %d\n",n);
printf("This is n Address, by pointer %d\n",p);
printf("This is actul n Holding address  %d\n",&n);
printf("This is pointer holding dress %d\n",&p);
printf("This is pointer value asign by pointer %d\n",*p);

return 0;
 }
//++++++++++++++++++++ Two varible type ++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
// int num=1000;
// char nu='a';
// int *p=&num;
// char *pp=&nu;
// printf("This is nu char Addresss , by pointer %d\n",pp);
// printf("This is n value %d\n",num);
// printf("This is n Address, by pointer %d\n",p);
// printf("This is actul n Holding address  %d\n",&num);
// printf("This is pointer holding dress %d\n",&p);
// printf("This is pointer value asign by pointer %d\n",*p);

// return 0;
// }

