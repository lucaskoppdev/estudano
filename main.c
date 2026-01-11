#include <stdio.h>

//transformando funcoes matematicas em codigo C


int sqrt(){
    



}



//funcao afim: f(x) = ax + b
int funcaoAfim(){

    //coeficiente angular
    int coef_angular;

    printf("Valor do coef angular ->\n");
    scanf("%d", &coef_angular);

    //coeficiente linear

    int coef_linear = 0;

    printf("Valor do coef linear ->\n"); 
    scanf("%d", &coef_linear);

    //valor de X

    int valor_x = 0;
    printf("Digite o valor de X ->\n");
    scanf("%d", &valor_x);

    //calculo da funcao

    int valor_final = coef_angular * valor_x + coef_linear;
    return valor_final;
}


//EQUAÇÃO DO SEGUNDO GRAU


int equacaoSegundoGrau(){

    //coficiente quadrático (A)
    int coef_quadratico;

    printf("Valor do coeficiente quadrático (A) ->");
    scanf("%d", &coef_quadratico);


    //coeficiente linear (B)
    int coef_linear;
    printf("Valor do coeficiente quadrático (B) -> ");
    scanf("%d", &coef_linear);


    //termo independente (C)
    int term_indep;
    printf("Valor do termo independente ->");


    //resolvendo classicamente por pitagoras pra facilitar

    int delta = (coef_linear * coef_linear) + 4 * coef_quadratico * term_indep;

    if (delta < 0){
        printf("Equação sem solução real!");
        return 0;
    }
    
    //calculo do valor final da funcao

    if (delta == 0){
        int valor_final = -coef_linear / 2 * coef_quadratico;
        
        return valor_final;
    }
    else{
        int valor_final_um = -coef_linear + //esperando o metodo pra calcular raiz quadrada

    }
}


int main(){
    
    
    return 0;
}