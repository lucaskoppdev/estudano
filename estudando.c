//aprendendo a lidar com ponteiros
#include <stdio.h>


//Criando um struct de Aluno que recebe 3 notas
typedef struct{

    float nota1;
    float nota2;
    float nota3;
    float media;

} Aluno;



int main(){

    int alunos_cadastrar;

    printf("Digite quantos alunos deseja cadastrar ->");
    scanf("%d", &alunos_cadastrar);

    Aluno* aluno;

    //Aloca a memoria e retorna um ponteiro para o endereco, se o alocamento falhar retorna um Null
    aluno = malloc(alunos_cadastrar * sizeof(Aluno));

    if (aluno == NULL){
        
        printf("Nao foi possivel armazenar os alunos !");

        return 1;
    }


    for (int i = 0; i < alunos_cadastrar; i++){

        int nota_um, nota_dois, nota_tres;

        pritnf("Digite a primeira nota do aluno %d", i);
        scanf("%d", &nota_um);

        pritnf("Digite a segunda nota do aluno %d", i);
        scanf("%d", &nota_dois);

        pritnf("Digite a terceira nota do aluno %d", i);
        scanf("%d", &nota_tres);

        aluno[i].nota1 = nota_um;
        aluno[i].nota2 = nota_dois;
        aluno[i].nota3 = nota_tres;

        int media = nota_um + nota_dois + nota_tres / 3;

        aluno[i].media = media;
    }
    return 0;
}