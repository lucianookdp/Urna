#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

int v;
float a,b,c,d,e,f;
                            do{

        printf("------------------------------");
        printf("\n Escolha sua opção de votação: \n ");
        printf("\n 11 - Candidato 1");
        printf("\n 22 - Candidato 2");
        printf("\n 33 - Candidato 3");
        printf("\n 44 - Candidato 4");
        printf("\n 55 - Voto em branco");
        printf("\n 00 - Voto nulo");
        printf("\n 99 - Encerrar votação");
        printf("\n------------------------------\n");
                        scanf("%d",&v);

     if(v!=11 && v!=22 && v!=33 && v!=44 && v!=99 && v!=00 && v!=55){
        printf("\n Voto Inválido. \n");
}
    if(v == 11){
        a = a + 1;
    } else if (v == 22){
        b = b + 1;
    }else if (v == 33){
        c = c + 1;
    }else if (v == 44){
        d = d + 1;
    }else if (v == 55){
        e = e + 1;
    }else if (v == 00){
        f = f + 1;}
}                       while (v!=99);

    if (v == 99){
        printf("\n Resultados gerais :");
}
    printf("\n\n\nO numero de votos do candidato 1 foi %.f \n",a);
    printf("O numero de votos do candidato 2 foi %.f \n",b);
    printf("O numero de votos do candidato 3 foi %.f \n",c);
    printf("O numero de votos do candidato 4 foi %.f \n",d);
    printf("O numero de votos em branco foi %.f \n",e);
    printf("O numero de votos nulos foram %.f \n",f);

     if(a > b && a > c && a > d){
        printf("\n O candidato 1 é o vencedor! \n");
    }else if(b > a && b > c && b > d){
        printf("\n O candidato 2 é o vencedor! \n");
    }else if(c > a && c > b && c > d){
        printf("\n O candidato 3 é o vencedor! \n");
    }else if(d > a && d > b && d > c){
        printf("\n O candidato 4 é o vencedor! \n");
    }else{
        printf("\n Empate de votos.\n");
}
}