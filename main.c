#include <stdio.h>

/*
    Simulação de uma peça de xadrez.
    A peça escolhida foi a Torre.
    O objetivo é validar o movimento basico da Torre no xadrez
    INFORMAÇÃO BASICA DA TORRE:
    Ela é uma peça que anda em linhas horizontais e verticais
    linha horizontal(h)
    linha vertical(v)
*/    
    int main(){
        
        int h1, v1;  // posição inicial
        int h2, v2; // posição final
        
        printf("=== SIMULADOR DE XADREZ ===\n");
        
        // Aqui ocorre a entrada da posição inicial
        printf("Digite a posição incial(h v) :");
        scanf("%d %d", &h1, &v1);
        // Entrada da posição final
        printf("Digite a posição final (h v): ");
        scanf("%d %d", &h2, &v2);
        
        /* Veificação de movimento da torre:
        - Movimento correto e válido se:
        -> Permanecer na mesma linha horizontal
        -> Permanecer na mesma linha vertical
        */
        
        if(h1 == v2 || v1 == v2){
            printf("MOvimento válido para torre!\n");
        }
        else{
            printf("\nMovimento invalido para torre.\n");
        }
        printf("\nPrograma finalizado.\n");
        
      return 0;
      }
