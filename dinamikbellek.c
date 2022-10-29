#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE*dosya;
    int *p,i,N,c;
    printf("kac adet sayi uretilecek:");
    scanf("%d",&N);
    p=(int *)malloc(N*sizeof(int));
    dosya=fopen("sayi.txt","w");
    srand(time(0));
    printf("uretilen sayilar:");
    for(i=0;i<N;i++){
        *(p+i)=rand()%100;
        fprintf(dosya,"%d",*(p+i));
        printf("%d",*(p+i));

    }
  fclose(dosya);
     printf("\n okunan sayilar :");
     dosya=fopen("sayi.txt","r");
     do{
        c = getc(dosya);
        if(c!=EOF);
        putchar(c);
     }while(c!=EOF);
     fclose(dosya);
     free(p);

    return 0;
}
