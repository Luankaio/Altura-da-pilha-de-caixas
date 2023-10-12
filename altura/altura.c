
/*5. Faça uma função que recebe, por parâmetro, a hora de início e a hora de término de um
jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar,
também por parâmetro, a duração do jogo em minutos, considerando que o tempo máximo
de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no
outro.*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int duracao(float inicioh,float iniciom,float terminoh,float terminom){
    int min;
    if(terminoh-inicioh<0){
        min = (inicioh*60)-(terminoh*60);
        return((24*60)-min+iniciom-terminom);
    }else{
        min = (terminoh*60)-(inicioh*60);
        return(min+terminom-iniciom);
    }

}



int main(){
    setlocale(LC_ALL, "portuguese");
    float inicioh, iniciom, terminoh, terminom;
    printf("Digite a hora de inicio\nHora:");
    scanf("%f", &inicioh);
    printf("\nMinuto:");
    scanf("%f", &iniciom);
    printf("Digite a hora de Termino\nHora:");
    scanf("%f", &terminoh);
    printf("\nMinuto:");
    scanf("%f", &terminom);

 printf("A duração em minutos é:%d", duracao(inicioh, iniciom, terminoh, terminom));
return 0;	
}