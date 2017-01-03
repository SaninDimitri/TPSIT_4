/* Programma che calcola l'area e il perimetro di un rettangolo utilizzando due thread */


#include<stdio.h>
#include<pthread.h>

float b; //Base
float h; //Altezza

//Funzione  calcolo del perimetro

void *perimetro(void *argc){
        float P=(b+h)*2;
        printf("\nperimetro: %.2f\n",P); //Output
}

//Funzione per il calcolo dell'area
void *area(void *argc){
        float A=b*h;
        printf("\narea: %.2f",A); //Output
}

main(){
        pthread_t t1,t2;

        //Input base
        printf("Inserisci base: ");
        scanf("%f",&b);

        //Input altezza
        printf("\nInserisci altezza: ");
        scanf("%f",&h);

        //Creazione thread delle funzioni area e perimetro
        pthread_create(&t1,NULL,&area,NULL);
        pthread_create(&t2,NULL,&perimetro,NULL);

        pthread_join(t1,NULL);
        pthread_join(t2,NULL);

        getchar();
}
