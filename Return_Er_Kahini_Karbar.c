#include<stdio.h>

int ami_return_kori_minus_1();
int ami_return_kori_2();
int ami_return_kori_minus_1_er_sathe_extra_kichu();

int main() {
    int a,b,c;

    a=ami_return_kori_minus_1();
    b=ami_return_kori_2();
    c=ami_return_kori_minus_1_er_sathe_extra_kichu();
    printf("From Return Minus 1 Function The Return Value: %d\n",a);
    printf("From Return 2 Function The Return Value: %d\n",b);
    printf("From Return Minus 1 er sathe aro kichu function Function The Return Value: %d\n",c);


	return 0;
}


int ami_return_kori_minus_1() {


    return -1;
}


int ami_return_kori_minus_1_er_sathe_extra_kichu() {
    int a=10;
    return -1+a;
}


int ami_return_kori_2() {
    return 2;
}


