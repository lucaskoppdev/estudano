#include <stdio.h>

//Copiando a biblioteca math usando apenas a stdlib


//metodo babilonico pra descobrir a raiz quadrada
int raizQuadrada(int numero){ //observe que a função trunca os valores para inteiros (pura conveniencia)

    int chute_atual;
    //gambiarra pq nao sei fazer do jeito certo
    if (numero > 0 & numero < 1){
        chute_atual = 1;
    }
    else{
        chute_atual = numero / 2; 
    }

    for(int i = 0; i != 13; i++){
        chute_atual = (chute_atual + numero / chute_atual) / 2;
    }

    return chute_atual; //valor da raiz mais proximo (truncado)
}


//funcao afim: f(x) = ax + b
double funcaoAfim(){

    //coeficiente angular
    dobule coef_angular;

    printf("Valor do coef angular ->\n");
    scanf("%d", &coef_angular);

    //coeficiente linear

    double coef_linear = 0;

    printf("Valor do coef linear ->\n"); 
    scanf("%d", &coef_linear);

    //valor de X

    double valor_x = 0;
    printf("Digite o valor de X ->\n");
    scanf("%d", &valor_x);

    //calculo da funcao

    dobule valor_final = coef_angular * valor_x + coef_linear;
    return valor_final;
}


//EQUAÇÃO DO SEGUNDO GRAU

//struct das 2 raizes da eq do 2 grau
typedef struct {
    int raiz1;
    int raiz2;
} Raizes;

Raizes equacaoSegundoGrau(double coef_quadratico, double coef_linear, double term_indep){

    Raizes resultado;
    //resolvendo por pitagoras pra facilitar e tratar delta == 0 
    double delta = (coef_linear * coef_linear) - 4 * coef_quadratico * term_indep;

    if (delta < 0){
        printf("Equação sem solução real!");
        
        resultado.raiz1 = 0;
        resultado.raiz2 = 0;

        return resultado;
    }
    
    //calculo do valor final da funcao

    if (delta == 0){
        double valor_final = -coef_linear / 2 * coef_quadratico;

        resultado.raiz1 = valor_final;
        resultado.raiz2  = 0;

        return resultado;
    }
    else{

        //x1 -> sinal positivo
        int x_um = (-coef_linear + raizQuadrada(delta)) / (2 * coef_quadratico);
        
        //x2 -> sinal negativo
        int x_dois = (-coef_linear - raizQuadrada(delta)) / (2 * coef_quadratico);

        resultado.raiz1 = x_um;
        resultado.raiz2 = x_dois;

        return resultado;
    }
}


//PRECISA DE CORREÇÕES 
double exponencial(double numero, double intervalo){
    //considerando que a funcao vai ter origem em 0

    double termo = 1;
    double soma = 1;
    for (int i = 1; i != intervalo + 1; i++){
            termo *= numero / i;
            soma+= termo;
        }
    return soma;
}


//potenciação
int potencia(int base, int expoente){
    int resultado = 1;
    for (int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}


int main(){

    Raizes resultado = equacaoSegundoGrau(2, -8, 4);

    printf("%d", resultado.raiz1);
    printf("%d", resultado.raiz2);   
    return 0;
}


