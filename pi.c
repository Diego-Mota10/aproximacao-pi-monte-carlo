//aproximacao do valor de pi atraves do metodo de monte carlo
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//verifica se o ponto cai dentro do circulo, se satisfizer a equação, cai dentro do círculo
int circulo (double x, double y)
{
    if ((x*x)+(y*y) <= 1){
        return 1;
    }
    return 0;
}

//gera pontos aleatórios para serem testados
double aleatorio()
{
    return 2.0 * ((double)rand() / RAND_MAX) - 1.0;
}

//conta quantos pontos satisfezem a equação do circulo
int contarCirculo ()
{
    int i = 0;
    int sum = 0;
    while (i<100000)
    {
        if (circulo(aleatorio(), aleatorio()))
        {
            sum = sum + 1;
        }
        i = i + 1;
    }
    return sum;
}


int main()
{
    srand(time(NULL));
    double pi = 4 * (contarCirculo()/100000.0);
    printf("%f\n", pi);
    return 0;
}
