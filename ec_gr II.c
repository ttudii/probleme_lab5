#include <stdio.h>
#include <math.h>


int delta(int a,int b,int c){

    int del;

    del=b*b-4*a*c;

    return del;

}

void rezultat(int a, int b, int c){

    float x1,x2;

    x1=((float)b*(-1)+sqrt(delta(a,b,c)))/(float)(2*a);
    x2=((float)b*(-1)-sqrt(delta(a,b,c)))/(float)(2*a);

    printf("x1=%.2f x2=%.2f\n",x1,x2);

}


int main(){

    int a,b,c;

    do{
    printf("Valorile coeficientilor: ");
    scanf("%d%d%d",&a,&b,&c);
    }while(delta(a,b,c)<0);

    printf("\n\n");
    rezultat(a,b,c);



    return 0;

}
