#include <stdio.h>

//Copiando a biblioteca math usando apenas a stdlib


//metodo babilonico pra descobrir a raiz quadrada
float raizQuadrada(float numero){ //observe que a função trunca os valores para inteiros (pura conveniencia)

    float chute_atual;
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


//constante de PI -> Testar

float pi(){
    float pi = 3.1415926;

    return pi;
}


//constante de euler -> Testar
float euler(){
    float n_euler = 0.5772156;
    
    return n_euler;
        
}


float tau(){
    float n_tau = 6.283185;

    return n_tau;
}


int trunc(float numero){

    int valor_final = numero;

    return numero;
}

//funcao afim: f(x) = ax + b
float funcaoAfim(){

    //coeficiente angular
    float coef_angular;

    printf("Valor do coef angular ->\n");
    scanf("%f", &coef_angular);

    //coeficiente linear

    float coef_linear = 0;

    printf("Valor do coef linear ->\n"); 
    scanf("%f", &coef_linear);

    //valor de X

    float valor_x = 0;
    printf("Digite o valor de X ->\n");
    scanf("%f", &valor_x);

    //calculo da funcao

    float valor_final = coef_angular * valor_x + coef_linear;
    return valor_final;
}


//EQUAÇÃO DO SEGUNDO GRAU

//struct das 2 raizes da eq do 2 grau pra poder retornar os 2 valores
typedef struct {
    float raiz1;
    float raiz2;
} Raizes;


//ta funcionando graças a deus
Raizes equacaoSegundoGrau(float coef_quadratico, float coef_linear, float term_indep){

    Raizes resultado;
    //resolvendo por pitagoras pra facilitar e tratar delta == 0 
    float delta = (coef_linear * coef_linear) - 4 * coef_quadratico * term_indep;

    if (delta < 0){
        printf("Equação sem solução real!");
        
        resultado.raiz1 = 0;
        resultado.raiz2 = 0;

        return resultado;
    }
    
    //calculo do valor final da funcao

    if (delta == 0){
        float valor_final = -coef_linear / 2 * coef_quadratico;

        resultado.raiz1 = valor_final;
        resultado.raiz2  = 0;

        return resultado;
    }
    else{

        //x1 -> sinal positivo
        float x_um = (-coef_linear + raizQuadrada(delta)) / (2 * coef_quadratico);
        
        //x2 -> sinal negativo
        float x_dois = (-coef_linear - raizQuadrada(delta)) / (2 * coef_quadratico);

        resultado.raiz1 = x_um;
        resultado.raiz2 = x_dois;

        return resultado;
    }
}

//fatorial -> testar
int factorial(int numero){

    int contador = numero;

    while(contador > 0){
        numero *= numero - 1;
        contador --;
    }

    return numero;
}


//PRECISA DE CORREÇÕES 
float exponencial(float numero, float intervalo){
    //considerando que a funcao vai ter origem em 0

    float termo = 1;
    float soma = 1;
    for (int i = 1; i != intervalo + 1; i++){
            termo *= numero / i;
            soma+= termo;
        }
    return soma;
}


//potenciação
float potenciacao(float base, float expoente){
    float resultado = 1;
    for (int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}


//converte Pi Radianos para Graus
float pitorad(float rad){
    float resultado;

    resultado = rad * 180;

    return resultado;
}





//converte Graus para Pi radianos 
int radtopi(float graus){
    int resultado;

    int resultado = graus / 180;

    return resultado;
}


int main(){
    Raizes resultado = equacaoSegundoGrau(2, -8, 4);

    printf("%f\n", resultado.raiz1);
    printf("%f", resultado.raiz2);
    
    
    return 0;
}