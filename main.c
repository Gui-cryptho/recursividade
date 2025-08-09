#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Aluno: Guilherme de Sousa Brito ra:2576627

#include "recursividade.h"
//Funções disponíveis:
/*
    inverter(n);
    somar(vet, tam);
    somatorio(n);
    pow(k, n);
    inverter100(vet, tam);
    m_d_c(x, y);
    agente_k(k, n);
    Multip_rec(n1, n2);
    primo_crescente(n);
    retornar_numero(n);
    primo_drecescente(n);
    fatorial_dupla(n);
*/

main()
{
    //ex1
    printf("Exercicio 1 - inverter:\n");
    int ex1_num1 = 123, ex1_num2 = 700;
    printf("Invertendo %d:\n", ex1_num1);
    inverter(ex1_num1);
    printf("\nInvertendo %d:\n", ex1_num2);
    inverter(ex1_num2);
    printf("\n\n");

    //ex2
    printf("Exercicio 2 - somar vetor:\n");
    int vet[5] = {1, 2, 3, 4, 5};
    printf("Vetor passado: {1, 2, 3, 4, 5}\n");
    printf("Soma: %d\n\n", somar(vet, sizeof(vet) / sizeof(vet[0])));  //output 15

    //ex3
    printf("Exercicio 3 - somatorio:\n");
    int ex3_n = 9;
    printf("Somatorio de 0 ate %d:\n", ex3_n);
    printf("%d\n\n", somatorio(ex3_n));  //output 45

    //ex4
    printf("Exercicio 4 - potencia:\n");
    int base = 2, expoente = 2;
    printf("Calculando %d elevado a %d:\n", base, expoente);
    printf("%d\n\n", pow(base, expoente));

    //ex5
    printf("Exercicio 5 - inverter vetor:\n");
    int vet5[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Vetor passado: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}\n");
    inverter100(vet5, sizeof(vet5) / sizeof(vet5[0]));
    printf("\n\n");

    //ex6
    printf("Exercicio 6 - mdc:\n");
    int x = 10, y = 20;
    printf("Calculando MDC entre %d e %d:\n", x, y);
    printf("%d\n\n", m_d_c(x, y));  //output 10

    //ex7
    printf("Exercicio 7 - verificar a ocorrencia de k em um numero natural:\n");
    char n[20] = "762021192";
    int k = 2;
    printf("String: \"%s\", digito a contar: %d\n", n, k);
    printf("Numero de vezes que k:%d apareceu: %d\n\n", k, agente_k(k, n));

    //ex8
    printf("Exercicio 8 - multiplicacao recursiva:\n");
    int n1 = 5, n2 = 3;
    printf("Multiplicando %d por %d:\n", n1, n2);
    printf("Resultado da multiplicacao %d\n\n", Multip_rec(n1, n2));

    //ex9
    printf("Exercicio 9 - primos pares crescente:\n");
    int numero_primo = 6;
    printf("Imprimindo pares de 0 ate %d em ordem crescente:\n", numero_primo);
    primo_crescente((numero_primo % 2 == 0) ? numero_primo : 1);
    printf("\n\n");

    //ex10
    printf("Exercicio 10 - numeros decrescentes:\n");
    int n_dec = 15;
    printf("Imprimindo numeros de %d ate 0 em ordem decrescente:\n", n_dec);
    retornar_numero(n_dec);
    printf("\n\n");

    //ex11
    printf("Exercicio 11 - primos pares decrescentes:\n");
    int numero_primo11 = 6;
    printf("Imprimindo pares de %d ate 0 em ordem decrescente:\n", numero_primo11);
    primo_drecescente((numero_primo11 % 2 == 0) ? numero_primo11 : 1);
    printf("\n\n");

    //ex12
    printf("Exercicio 12 - fatorial duplo:\n");
    int n_fat = 5;
    printf("Calculando fatorial duplo de %d:\n", n_fat);
    printf("%d\n", fatorial_dupla(n_fat));  //input 5, output 15
    printf("\n");


    return(0);
}
