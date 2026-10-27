Aproximação de \(\pi\) usando o método de Monte Carlo

Sobre o projeto:
Esse projeto é implementado em C e utiliza o método de Monte Carlo para aproximar o valor de \(\pi\)

A função "aleatorio" gera pontos \((x,y)\) dentro do espaço geometrico da área de uma quadrado de lado \(2\) centrado no ponto \((0,0)\).
São gerados 100000 pontos aleatórios, a função "circulo" verifica se o ponto gerado aleatóriamente satisfaz a equação do círculo de raio (\1\) também com origem no centro.

A função "contarCirculo" retorna o número de pontos que satisfazem a equação do círculo.

Dedução matemática:
\[
    \frac{Área do Círculo}{Área do Quadrado} = \frac{\pi \cdot R^2}{(2 \cdot R)^2}
\]
em que \(R\) é o raio do círculo
\[
    \frac{Área do Círculo}{Área do Quadrado} = \frac{\pi \cdot R^2}{4\cdot R^2}
\]
Dividindo \(R^2\)
\[
    \frac{Área do Círculo}{Área do Quadrado} = \frac{\pi}{4}
\]
\[
    \therefore \frac{Área do Círculo}{Área do Quadrado} \cdot 4 = \pi
\]

A área do círculo é diretamente proporcional ao número de pontos que satisfazem a equação do círculo. Dessa forma, a razão entre os pontos aleatórios que satisfazem a equação do círculo e o número total de pontos multiplicado por 4 é igual \(\pi\)


Tecnologias utilizadas

Linguagem C

Biblioteca padrão do C (stdlib.h, stdio.h e time.h)

Como executar

Compilação

Com o compilador GCC instalado, abra o terminal na pasta do projeto e execute:

gcc main.c -o pi

Substitua main.c pelo nome real do arquivo-fonte, caso seja diferente.

Execução

No Windows PowerShell:

.\pi.exe

O programa exibirá o valor aproximado de \(\pi\)