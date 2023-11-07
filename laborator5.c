#include <stdio.h>

void ex5(int nr, int *nr_cif, int *cif1,int *cif2, int *cif3){

int temp=nr;

while(nr){
    *nr_cif=*nr_cif+1;
    nr/=10;
}

if(*nr_cif==1){
    *cif1=temp;
}
else
if(*nr_cif==2){
    *cif1=temp/10;
    *cif2=temp%10;
}
else
{
    *cif1=temp/100;
    *cif2=temp/10%10;
    *cif3=temp%10;
}

}

int ex6(int nr,int *nou){

int invers,temp=nr;

while(nr>0){
    invers=invers*10+nr%10;
    nr/=10;
}

while(invers>0){
    if((invers%10)%2==0) *nou=*nou*10+invers%10;
    invers/=10;
}

if(*nou)
    return 1;
else
    return 0;

}

int ex4(char *lit1,char *lit2,char *lit3){

    char copie1,copie2,copie3;
    copie1=*lit1;
    //printf("%c\n",copie1);
    copie2=*lit2;
    copie3=*lit3;

    if('a'<=*lit1 && *lit1<='z') {
            *lit1=*lit1-32;
    }


    if('a'<=*lit2 && *lit2<='z'){
            *lit2=*lit2-32;
    }

    if('a'<=*lit3 && *lit3<='z'){
            *lit3=*lit3-32;
    }

    if(copie1!=*lit1 && copie1!=*lit1 && copie1!=*lit1)
        return 1;
    else
        return 0;

}

int fibo(int n){
    int fib=0;
    int i=1,j=1,k=0;
    while(i<=n){

        fib=j+k;
        //printf("%d + %d = %d\n",j,k,fib);
        k=j;
        j=fib;

        i++;
    }

    return fib;

}

int fact(int n){

    int fact=1,i;

    for(i=2;i<=n;i++){

        fact*=i;

    }

    return fact;

}

float expresie(int n){

    float rez;

    rez = (float)(fibo(n))/(float)(fact(n));

    return rez;
}

int main(){

int n,aux;

do{
    printf("Introduceti numarul: ");
    scanf("%d",&n);
}while(n<=0);

printf("\n\nfactorial: %d\n",fact(n));
printf("fibonacci: %d\n\n",fibo(n));
printf("Valoarea finala a expresiei este: %.2f\n",expresie(n));



/*
char lit1,lit2,lit3;
scanf("%c",&lit1);
getchar();
scanf("%c",&lit2);
getchar();
scanf("%c",&lit3);

if(ex4(&lit1,&lit2,&lit3)==1){
    printf("Conversia s-a putut realiza,iar literele obtinute sunt: \n");
    printf("%c %c %c",lit1,lit2,lit3);
}
else
    printf("Conversia nu s-a putut realiza.");
*/






/*
int nr,nou=0;

do{
    printf("Introduceti numarul: ");
    scanf("%d",&nr);
}while(nr<=0);


if(ex6(nr,&nou)==1)
    printf("\n\nnumarul obtinut din %d este %d\n\n",nr,nou);
else
    printf("nu s-a putut obtine nicio valoare\n");
*/





/*
int nr_cif=0;
int aux;
int cif1,cif2,cif3;

do{
    nr_cif=0;
    printf("Introduceti numarul: ");
    scanf("%d",&nr);
    aux=nr;
    while(aux>0){
        nr_cif++;
        aux/=10;
    }
}while(nr_cif>3);
printf("\n\nA dfost verificat ca numarul are cel mult 3 cifre.\n\n");

nr_cif=0;
ex5(nr,&nr_cif,&cif1,&cif2,&cif3);
printf("Numarul ales are %d cifre.\n\n",nr_cif);
if(nr_cif==1){
    printf("cifra 1: %d\n",cif1);
}
else
if(nr_cif==2){
    printf("cifra 1: %d\n",cif1);
    printf("cifra 2: %d\n",cif2);
}
else
{
    printf("cifra 1: %d\n",cif1);
    printf("cifra 2: %d\n",cif2);
    printf("cifra 3: %d\n",cif3);
}

*/

return 0;
}
