#ifndef RECURSIVIDADE_H_INCLUDED
#define RECURSIVIDADE_H_INCLUDED


void inverter(int n)
{
    //Prestar bem atencao no caso base para nao ser criado um loop infito
    if(n == 0)
        return 0;
    else
    {
        //Aqui o resto de 10 vai ser sempre o numero da ponta e a cada
        //divisao o numero da ponta e removido
        printf("%d", n % 10);
        return inverter(n / 10);
    }
}

int somar(int *vet,int tam)
{
    //Aqui esta sendo passado *vet para percorrer vet e acessar o conteudo dele
    //e com tam definindo o ponto de parada da recursao
    if(tam == 0)
        return 0;
    else
        return *vet + somar(vet + 1,tam - 1);
}

int somatorio(int n)
{
    //Aqui o somatorio está sendo somado de forma descrescente
    if(n == 0)
        return 0;
    else
        return n + somatorio(n - 1);
}

int pow(int k, int n)
{
    //Aqui mantemos k e decrementamos n o numero de vezes
    //que precisamos imprimir k
    if(n == 0)
        return 1;
    else
        return k * pow(k, n - 1);


}

int inverter100(int *vet, int tam)
{
    //Aqui temos tam - 1 para ja iniciar no ultimos elemento de vet
    // e só drementamos ele conforme as interacoes
    if(tam == 0)
        return 0;
    else
    {
        printf("%d ", vet[tam - 1]);
        return inverter100(vet, tam - 1);
    }
}

int m_d_c(int x, int y)
{
    //Aqui foi usado o principio do algoritmo de Euclides onde é feito x % y onde o resto não altera o valor do mdc
    //de x, y e x precisa ser atribuido sempre com o maior valor até o valor de y chegar a 0
    if(y == 0)
        return x;
    else
        return m_d_c(y, x % y);
}

int agente_k(int k, char *n)
{
    //Aqui a string vai ser percorrida verificando caracter por carater até o \0
    // e ira procurar se k == n
    if(*n == '\0')
        return 0;
    else
    {
        if(*n == (k + '0'))
        {

            return 1 + agente_k(k, n + 1);
        }
        else
            return agente_k(k, n + 1);

    }
}

int Multip_rec(int n1, int n2)
{
    if(n2 == 0)
        return 0;
    else
        return n1 + Multip_rec(n1, n2 - 1);
}

void primo_crescente(int n)
{
    if(n < 0)
        return;
    else
    {
        primo_crescente(n - 1);
        if(n % 2 == 0)
            printf("%d ", n);
    }
}

void retornar_numero(int n)
{
    if(n < 0)
        return;
    else
    {
        printf("|%d| ", n);
        retornar_numero(n - 1);
    }
}
void primo_drecescente(int n)
{
    if(n < 0)
        return;
    else
    {
        if(n % 2 == 0)
            printf("%d ", n);
        return primo_drecescente(n - 1);
    }
}

int fatorial_dupla(int n){
    if(n == 0 || n == 1)
        return 1;
    else{
        return n * fatorial_dupla(n - 2);
    }
}


#endif // RECURSIVIDADE_H_INCLUDED
