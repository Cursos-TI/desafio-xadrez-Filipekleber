#include <stdio.h>

int main(){

    char opcao, opcaoTorre, opcaoBispo, opcaoRainha, opcaoCavalo;
    int movimentacao = 1;

    printf("Escolha uma peça para movimentar\n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n");
    printf("Escolha uma da opções: ");
    scanf(" %c", &opcao);

switch (opcao)
{

//Função da torre;
//------------------------------------------------------------------------------------
case 'T':
case 't':

//Escolhendo se vai para horizontal ou para frontal;

    
    printf("Escolha para onde ele vai?\n");
    printf("D. Direita\n");
    printf("E. Esquerda\n");
    printf("Escolha uma das opcoes: ");
    scanf(" %c", &opcaoTorre);
    
//----------------------------------------------------------------------------------

    switch (opcaoTorre)
    {
    case 'D':
    case 'd':

    while (movimentacao <= 5)
    {
        printf("Direita\n");
        movimentacao++;
    }
    
    break;

//----------------------------------------------------------------------------------

    case 'E':
    case 'e':

    while (movimentacao <= 5)
    {
        printf("Esquerda\n");
        movimentacao++;
    }
    break;

    default:
    printf("Opcao invalida\n");
        break;
    }
//Fim do comando da Torre;
//--------------------------------------------------------------------------------------

case 'B':
case 'b':

    printf("Escolha para qual diagonal seu bisto vai?\n");
    printf("D. Diagonal Direita\n");
    printf("E. Diagonal Esquerda\n");
    printf("Escolha uma da opções: ");
    scanf(" %c", &opcaoBispo);

switch (opcaoBispo)
{
case 'D':
case 'd':
    do
    {
        printf("Diagonal Direita\n");
        movimentacao++;
    } while (movimentacao <= 5);
    
    break;

//----------------------------------------------------------------------------------------

case 'E':
case 'e':
    do
    {
        printf("Diagonal Esquerdo\n");
        movimentacao++;
    } while (movimentacao <= 5);
    
break;

default:
    printf("Opcao invalida\n");
    break;
}

break;
//FIM DO COMANDO BISPO
//---------------------------------------------------------------------------------------------

case 'R':
case 'r':

    printf("Para qual lado voce quer mover a rainha?\n");
    printf("C. Cima\n");
    printf("B. Baixo\n");
    printf("D. Direito\n");
    printf("E. Esquerdo\n");
    printf("Escolha uma da opções: ");
    scanf(" %c", &opcaoRainha);

    switch (opcaoRainha)
    {

    case 'C':
    case 'c':

    for(movimentacao; movimentacao <= 8; movimentacao++)
        {
            printf("Cima\n");
        }
    

    break;



    case 'B':
    case 'b':

    for(movimentacao; movimentacao <= 8; movimentacao++)
        {
            printf("Baixo\n");
        }


    break;

    case 'D':
    case 'd':

        for(movimentacao; movimentacao <= 8; movimentacao++)
        {
            printf("Direita\n");
        }
        
        break;

//--------------------------------------------------------------------------------------------

        case 'E':
        case 'e':

        for(movimentacao; movimentacao <= 8; movimentacao++)
        {
            printf("Esquerda\n");
        }
        
        break;
    
    default:
        printf("Opcao invalida\n");
        break;
    }

break;
//FIM DO COMANDO RAINHA
//-----------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------
//Comando do cavalo

case 'C':
case 'c':


printf("Para qual lado voce quer mover o cavalo?\n");
printf("D. Direito\n");
printf("E. Esquerdo\n");
printf("Escolha uma das opcoes: ");
scanf(" %c", &opcaoCavalo);

switch (opcaoCavalo)
{
case 'D':
case 'd':
    
    while (movimentacao--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita");
    }
    
    break;

case 'E':
case 'e':

    while (movimentacao--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    printf("Esquerda");
}

break;

default:
printf("Opcao invalida");
    break;
}


break;

default:
        printf("Opcao invalida\n");
    break;
}

}
