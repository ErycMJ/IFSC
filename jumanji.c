//JUMANJU
//Desenvolvimento de um jogo (IFSC)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int personagem, idade, caminho, batfinal, animal, respini, p, nt, ntr,pontosop, i;
int alternativa, alternativa01, alternativa02, alternativa03, alternativa04, alternativa05;
int erros = 0;
int acertos = 0;
int XP = 0;
int TR = 0;
p = 0;
nt= 0;
ntr = 0;
char resp[3], opcao, tentativas[2], t[2];
int ranking [5][2];
char nome [5][30];
main ()
{

for (int i = 0; i <= 4; i++)
{
ranking [i][0] = 0;
ranking [i][1] = 0;
}

    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");

    printf("\n\n\n\n=========================================================JUMANJI========================================================\n\n\n\n");

    Sleep(2500);
    system("cls");


    printf("\nEscreva Seu Nome:");
    scanf("%[^\n]", &nome);
    fflush(stdin);

    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");

    printf("\nDigite Sua Idade:");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");
    printf("\nEscolha uma opcao...");

    fflush(stdin);

    do
    {
        printf("\n1- Jogar");
        printf("\n2- Pontuacao");
        if(p>=5)
        {
            printf("\n3- Boss");
        }
        printf("\n0- Sair");
        printf("\nESCOLHA:");
        scanf ("%d", &respini);
        Sleep(1500);
        system("cls");

        printf("\n                                                       ...LOADING...");
        Sleep(2000);
        system("cls");

        switch(respini)
        {

        case 1:
            jogo();

            break;

        case 2:

            if (acertos == 0 && erros == 0)
            {

                printf("\nvoce ainda nao jogou\n");
                Sleep(1500);
                system("cls");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");

            }
            else
            {
                pontos();
            }
            break;

        case 3:
            if(p>=5)
            {
                Boss();
            }
            break;


        case 0:



            break;

        }

    }
    while(respini == 1 | respini == 2| respini == 3 );

    printf("\nJogo finalizado ate um proximo dia");
    Sleep(1500);
    system("cls");

    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");

}



pontos ()
{

    for (int i = 0; i <= 4; i++)

    {
        if(ranking[i][0] == 0 | ranking[i][1] == 0)
        {

            ranking[i][0] = p;
            ranking[i][1] = ntr;
            i = 6;
        }
    }

    do
    {
        printf("\n1- ver pontos");
        printf("\n2- salvar pontuacao");
        printf("\nESCOLHA:");
        scanf ("%d", &pontosop);
        Sleep(2000);
        system("cls");

        printf("\n                                                       ...LOADING...");
        Sleep(2000);
        system("cls");

        switch(pontosop)
        {

        case 1:

            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");

            printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("Acertos em derrubar: %d", p);
            ntr = nt - p;
            printf("\nErros em derrubar: %d", ntr);
            printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::");
            printf("\ncom um total de tentativas de: %d", nt);
            printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

            printf("\n                                                       ...LOADING...");
            Sleep(5000);
            system("cls");


            printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("Acertos em catalogar: %d", acertos);

            printf("\nErros em catalogar: %d", erros);
            printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

            printf("\n                                                       ...LOADING...");
            Sleep(5000);
            system("cls");

            for (int i = 0; i <= 4; i++)

            {
                if(ranking[i][0] == 0 | ranking[i][1] == 0)
                {


                }
                else
                {

                    printf("%s - %d - %d\n", nome[i],ranking[i][0], ranking[i][1]);

                }
            }

        case 2:

        {
            printf("Variavel: %d", i);

            ranking[i][0] = acertos;
            ranking[i][1] = erros;

            FILE * arquivo = fopen("bancodepontos.txt", "w");

            if (arquivo == NULL)
            {
                printf("Erro: n�o foi poss�vel abrir o arquivo. \n");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
            }
            else
            {

                fwrite(ranking, sizeof(ranking), 1, arquivo);
                fwrite(nome, sizeof(nome), 1, arquivo);


                fclose(arquivo);

                printf("\nDados salvos com sucesso!\n");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");

            }
        }
        break;

        }
    }
    while(pontos == 1 | pontos == 2 | pontos == 3 );
}


jogo()
{
    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");

    printf("\nMuito bem %s", &nome);
    printf("\nSera que voce tem conhecimento e capacidade, para catalogar todos os 5 seres secretos?");
    printf("\nSim ou Nao\n");
    scanf("%s", &resp);

    fflush(stdin);
    Sleep(1500);
    system("cls");

    while((strcmp(resp, "S") == 0) || (strcmp(resp, "s") == 0) || (strcmp(resp, "SS") == 0) || (strcmp(resp, "Ss") == 0) || (strcmp(resp, "ss") == 0) ||
            (strcmp(resp, "SIM") == 0) || (strcmp(resp, "Sim") == 0) || (strcmp(resp, "sim") == 0))
    {

        printf("\n\nSe consentre, e pegue a presa!!!");
        printf ("\nVoce recebeu um lancador pneumatico de dardos sedativos com as seguintes especificacoes:\n acada 100m o tira cai 1cm (ou seja acada sem m ela decera uma cm(letra) \n acada 10km/h o vento movimenta a bala um cm para o lado informado.\n ");
        printf( "\nVoce deve acertar o meio do alvo (c3) e esta em cm \n como o alvo abaixo\n");

        printf("\n\n   1   2   3   4   5\n");
        printf("   _ _ _ _ _ _ _ _ _   \n");
        printf("a |                 |  \n");
        printf("b |                 |  \n");
        printf("c |       O         |  \n");
        printf("d |                 |  \n");
        printf("e |                 |  \n");
        printf("   - - - - - - - - - \n");

        printf("\n                                                       ...LOADING...");
        Sleep(8000);
        system("cls");
        printf("\n\nescreva o nome do animal que vc deseja catalogar");
        printf("\n1-Leopardo");
        printf("\n2-Cobra");
        printf("\n3-Homem");
        printf("\n4-Tubarao");
        printf("\n5-Canario");
        printf("\nDigite uma opcao:");
        scanf("%d", &animal);

        fflush(stdin);
        printf("\n                                                       ...LOADING...");
        Sleep(2000);
        system("cls");
        switch(animal)
        {

        case 1:

            printf("\n\n      1   2   3   4   5   6   7");
            printf("\n    -----------------------------");
            printf("\n a  |    1        1        1    |");
            printf("\n b  |   1 1      1 1      1 1   |");
            printf("\n c  | 01 1 1 00 1 1 100001 1 10 |");
            printf("\n d  | 0  0        0        0  0 |");
            printf("\n e  | 0        0000000      0   |");
            printf("\n f  |   0     0       0    0    |");
            printf("\n g  |    0     0     0    0     |");
            printf("\n h  |    0      0 0 0     0     |");
            printf("\n i  |     0              0      |");
            printf("\n j  |      000001 1 10000       |");
            printf("\n k  |       0000 1 1 000        |");
            printf("\n l  |             1             |");
            printf("\n    -----------------------------\n\n");

            printf ("\nvoce esta a 300m e o vento esta a 10km/h ^(sua direcao = cima)!!! ");
            printf("\n(primeiro a letra e em seguida o numero ex: a1)");
            printf("\nMira:");
            scanf ("%s",t);
            Sleep(1500);
            system("cls");
            nt = nt + 1;
            if (strcmp(t,"a3" ) == 0 | strcmp(t,"A3" ) == 0 )
            {
                p = p + 1;
                printf("\nBOYAH");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                leopardo();
            }
            else
            {

                printf( "\n foi por pouco, mas voce errou, e isso acabou assustando o animal e ele fugiu tente novamente...");
                Sleep(1500);
                system("cls");
            }
            fflush(stdin);


            break;

        case 2:
            printf("\n\n    1   2   3   4   5");
            printf("\n   -------------------");
            printf("\n a |   101    101    | ");
            printf("\n b | 000000  000000  | ");
            printf("\n c |  0   1  1   0   | ");
            printf("\n d |   0  1  1  0    | ");
            printf("\n e |  0   1  1   0   | ");
            printf("\n f |   0        0    | ");
            printf("\n g |    00    00     | ");
            printf("\n h |     0    0      | ");
            printf("\n i |      0000       | ");
            printf("\n   -------------------\n\n");

            printf( "voce esta a 50m e o vento esta fraco, onde voce atira?");
            printf("\n(primeiro a letra e em seguida o numero ex: a1)");
            printf("\nMira:");
            scanf("%s", t);
            Sleep(1500);
            system("cls");
            nt = nt + 1;
            if (strcmp(t,"c3") == 0 | strcmp(t,"C3" ) == 0  )
            {
                p = p + 1;
                printf( "\n Bom trabalho!!! \n");
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                Cobra ();
            }
            else
            {

                printf( "\n foi por pouco, mas voce errou, e isso acabou assustando o animal e ele fugiu tente novamente...");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
            }
            fflush(stdin);
            break;

        case 3:

            printf("\n\n  1   2   3   4");
            printf("\n    --------------");
            printf("\n a |   00000000  |");
            printf("\n b | 0  0   0 0  |");
            printf("\n c | 0    1   0  |");
            printf("\n d |  0 1111 0   |");
            printf("\n e |   000000    |");
            printf("\n f |  1   1   1  |");
            printf("\n    --------------\n\n");

            printf ("\nvoce esta a 100m e o vento esta 10km --->(direita)");
            printf("\n(primeiro a letra e em seguida o numero ex: a1)");
            printf("\nMira:");
            scanf ("%s",t);
            nt = nt + 1;
            if (strcmp(t,"b2") == 0 | strcmp(t,"B2" ) == 0  )
            {
                p = p + 1;
                printf("\nBELO TIRO...");
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                homem ();
            }
            else
            {
                printf( "\n foi por pouco, mas voce errou, e isso acabou assustando o animal e ele fugiu tente novamente...");
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
            }
            fflush(stdin);


            break;

        case 4:
            printf("\n     1   2   3   4   5");
            printf("\n   ---------------------");
            printf("\n a | 111               | ");
            printf("\n b | 1111              | ");
            printf("\n c | 111111            | ");
            printf("\n d | 11111111          | ");
            printf("\n e | 111111111         | ");
            printf("\n f | 11111111111       | ");
            printf("\n g | ~~~~~~~~~~~~~~~~~~| ");
            printf("\n   ---------------------\n\n");


            printf ("\nvoce esta a 50m e o vento esta 30km <----(esquerda) ");
            printf("\n(primeiro a letra e em seguida o numero ex: a1)");
            printf("\nMira:");
            scanf ("%s",t);
            nt = nt + 1;
            if (strcmp(t,"c5" ) == 0 | strcmp(t,"C5" ) == 0 )
            {
                p = p + 1;
                tubarao();
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
            }
            else
            {
                printf( "\n foi por pouco, mas voce errou, e isso acabou assustando o animal e ele fugiu tente novamente...");
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
            }
            fflush(stdin);


            break;

        case 5:
            printf("\n\n  1   2   3   4");
            printf("\n   -----------------");
            printf("\n a |    <0  111    | ");
            printf("\n b |     00000     | ");
            printf("\n c |      000      | ");
            printf("\n d |      1 1      | ");
            printf("\n   -----------------\n\n");


            printf ("\nvoce esta a 100m e o vento esta baixo");
            printf("\n(primeiro a letra e em seguida o numero ex: a1)");
            printf("\nMira:");
            scanf ("%s",t);
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");
            nt = nt + 1;
            if (strcmp(t,"b3") == 0 | strcmp(t,"B3" ) == 0  )
            {
                p = p + 1;
                printf("\nBOAH...");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                canario();
            }
            else
            {

                printf( "\n foi por pouco, mas voce errou, e isso acabou assustando o animal e ele fugiu tente novamente...");

                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
            }
            fflush(stdin);


            break;

        default:
            printf("\nOpcao invalida, por favor, tente novamente!\n");
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");
        }
    }

    printf("\n\nObrigado por jogar!!!");
    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");

}






leopardo()
{

    fflush(stdin);


    printf("\n\n1) De que classe eh esse animal???\n\n");
    printf("\nA) Mamifero");
    printf("\nB) Oviparo\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada!!!\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }


    printf("\n\n2) Esse animal pode ser classificado como...\n\n");
    printf("\nA) Domestico");
    printf("\nB) Selvagem");
    printf("\nC) Racional\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");

        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n3) Qual a base alimentar desse animal???\n\n");
    printf("\nA) Herbivoro");
    printf("\nB) Carnivoro");
    printf("\nC) Onivoro\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1000);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1000);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1000);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n4) Qual o habitate natural desse animal???\n\n");
    printf("\nA) EUA e Canada");
    printf("\nB) Brasil e Peru");
    printf("\nC) Africa e Asia");
    printf("\nD) Mundo todo\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1000);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n5) Qual a velocidade maxima desse animal???\n\n");
    printf("\nA) 58km/h");
    printf("\nB) 70 km/h");
    printf("\nC) 90 km/h");
    printf("\nD) 180 km/h\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nAchou que fosse o Gueepardo? Kkkkkk\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\nMuito bem aventureiro");
    printf("\nVc quer seguir em frente?");
    printf("\nDigite Sim para continuar, ou qualquer tecla exceto s, para sair\n");
    scanf("%s", &resp);
    Sleep(1500);
    system("cls");
    fflush(stdin);
}



Cobra()
{

    fflush(stdin);


    printf("\n\n1) De que classe eh esse animal???\n\n");
    printf("\nA) Mamifero");
    printf("\nB) Oviparo\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n2) Nesse animal pode ser classificado como...\n\n");
    printf("\nA) domestico");
    printf("\nB) selvagem");
    printf("\nC) racional\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1000);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n3) Qual a base alimentar desse animal???\n\n");
    printf("\nA) Herbivoro");
    printf("\nB) Carnivoro");
    printf("\nC) Onivoro\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\n\Parabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }


    printf("\n\n4) Qual o habitate natural desse animal???\n\n");
    printf("\nA) EUA e Canada");
    printf("\nB) Brasil e Peru");
    printf("\nC) Africa e Asia");
    printf("\nD) Mundo todo\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1000);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n5) Qual a velocidade maxima desse animal???\n\n");
    printf("\nA) Desconhecida");
    printf("\nB) 11km/h");
    printf("\nC) 12 km/h");
    printf("\nD) 13km/h\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\nMuito bem aventureiro");
    printf("\nVc quer seguir em frente?");
    printf("\nDigite Sim para continuar, ou qualquer tecla exceto s, para sair\n");
    scanf("%s", &resp);
    Sleep(1500);
    system("cls");
    fflush(stdin);
}




homem()
{

    fflush(stdin);


    printf("\n\n1) De que classe eh esse animal???\n\n");
    printf("\nA) Mamifero");
    printf("\nB) Oviparo");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;

    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n2) Esse animal pode ser classificado como...\n\n");
    printf("\nA) Domestico");
    printf("\nB) Selvagem");
    printf("\nC) Racional");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }


    printf("\n\n3) Qual a base alimentar desse animal???\n\n");
    printf("\nA) Herbivoro");
    printf("\nB) Carnivoro");
    printf("\nC) Onivoro\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n4) Qual o habitate natural desse animal???\n\n");
    printf("\nA) EUA e Canada");
    printf("\nB) Brasil e Peru");
    printf("\nC) Africa e Asia");
    printf("\nD) Mundo todo");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1000);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n5) Qual a velocidade maxima desse animal???\n\n");
    printf("\nA) Desconhecida");
    printf("\nB) 45km/h");
    printf("\nC) 20 km/h");
    printf("\nD) 15km/h");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\nMuito bem aventureiro");
    printf("\nVc quer seguir em frente?");
    printf("\nDigite Sim para continuar, ou qualquer tecla exceto s, para sair\n");
    scanf("%s", &resp);
    Sleep(1500);
    system("cls");
    fflush(stdin);
}



tubarao()
{

    fflush(stdin);


    printf("\n\n1) De que classe eh esse animal???\n\n");
    printf("\nA) Mamifero");
    printf("\nB) Oviparo");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n2) Esse animal pode ser classificado como...\n\n");
    printf("\nA) Domestico");
    printf("\nB) Selvagem");
    printf("\nC) Racional");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }


    printf("\n\n3) Qual a base alimentar desse animal???\n\n");
    printf("\nA) Herbivoro");
    printf("\nB) Carnivoro");
    printf("\nC) Onivoro\n");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n4) Qual o habitate natural desse animal???\n\n");
    printf("\nA) aguas salgadas");
    printf("\nB) aguas doces");
    printf("\nC) aguas salobas");
    printf("\nD) ele eh terrestre");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\n\nSe tem problema???\n");
        Sleep(1500);
        system("cls");
        scanf("%s", &nome);
        erros = erros + 2.0;
    }

    printf("\n\n5) Qual a velocidade maxima desse animal???\n\n");
    printf("\nA) Desconhecida");
    printf("\nB) 43km/h");
    printf("\nC) 80 km/h");
    printf("\nD) 50km/h");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }


    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\nMuito bem aventureiro");
    printf("\nVc quer seguir em frente?");
    printf("\nDigite Sim para continuar, ou qualquer tecla exceto s, para sair\n");
    scanf("%s", &resp);
    Sleep(1500);
    system("cls");
    fflush(stdin);
}




canario ()
{

    fflush(stdin);


    printf("\n\n1) De que classe eh esse animal???\n\n");
    printf("\nA) Mamifero");
    printf("\nB) Oviparo");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n2) Esse animal pode ser classificado como...\n\n");
    printf("\nA) Domestico");
    printf("\nB) Selvagem");
    printf("\nC) Racional");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n3) Qual a base alimentar desse animal???\n\n");
    printf("\nA) Herbivoro");
    printf("\nB) Carnivoro");
    printf("\nC) Onivoro");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    printf("\n\n4) Qual o habitate natural desse animal???\n\n");
    printf("\nA) Mundo Todo");
    printf("\nB) Brasil");
    printf("\nC) Africa");
    printf("\nD) NDA");
    printf("\nAlternativa:");
    scanf("%c", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\n5) Qual a velocidade maxima desse animal???\n\n");
    printf("\nA) Desconhecida");
    printf("\nB) 100km/h");
    printf("\nC) 350 km/h");
    printf("\nD) 30km/h");
    printf("\nAlternativa:");
    scanf("%s", &opcao);
    Sleep(1500);
    system("cls");
    fflush(stdin);

    if(opcao == 'A' || opcao == 'a')
    {
        printf("\nParabens, vc acertou!!!\n");
        Sleep(1500);
        system("cls");
        acertos = acertos + 1.0;
    }

    else if(opcao == 'B' || opcao == 'b')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'C' || opcao == 'c')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    else if(opcao == 'D' || opcao == 'd')
    {
        printf("\nPeeehh, resposta errada\n");
        Sleep(1500);
        system("cls");
        erros = erros + 1.0;
    }

    printf("\n\nMuito bem aventureiro");
    printf("\nVc quer seguir em frente?");
    printf("\nDigite Sim para continuar, ou qualquer tecla exceto s, para sair\n");
    scanf("%s", &resp);
    Sleep(1500);
    system("cls");
    fflush(stdin);
}

Boss()
{

    printf("\nDigite qualquer tecla para terminar as perguntas, e ir para a proxima parte\n");
    scanf("%s", &resp);

    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");

    printf("\nParabens, aparentemente vc deu conta dos desafios, e conseguiu chegar ao BIG BOSS!!!");
    printf("\nVoce se mostro ser uma pessoa talentosa e abilidosa, eh meu dever informar-lhe que de agora em diante o jogo nao sera mais tao facil.");
    printf("\nNao ssera mais apenas atirar em animais poderosos, ou responder perguntas");
    printf("\nBoa sorte, e tenha um bim dia...");
    printf("\n\n");
    printf("\nExcelente, apos derrotar os guardioes, e adquirir os seus poderes, vc finalmente esta pronto para voltar para a casa, mas antes disso");
    printf("\nTera que derrotar o guardiao misterioso, que guarda o portal dentro da caverna assombrada, so derrotando ele eh que vc podera sair");
    printf("\nMas antes, existe parte das exencias, que vc tirou dos guardioes, para lhe ajudar nessa jornada.");
    printf("\nVc achou que suas missoes anteriores tinham sido em vao, hein?");
    printf("\nMas, se nao fosse por eles, agora que vc se mostrou digno, seja sabio");
    printf("\nE escolha com calma, seu destino depende disso");
    printf("\nS/N:");
    scanf("%s", &resp);

    printf("\n                                                       ...LOADING...");
    Sleep(2000);
    system("cls");
    fflush(stdin);

    while((strcmp(resp, "S") == 0) || (strcmp(resp, "s") == 0) || (strcmp(resp, "SS") == 0) || (strcmp(resp, "Ss") == 0) || (strcmp(resp, "ss") == 0) ||
            (strcmp(resp, "SIM") == 0) || (strcmp(resp, "Sim") == 0) || (strcmp(resp, "sim") == 0))
    {

        printf("\n\n Vc acaba de entrar na caverna, e se depara com os seguintes portais:");
        printf("\n Cada portal da para algum lugar");
        printf("\n 1- Vulcao");
        printf("\n 2- Ilha deserta");
        printf("\n 3- Espaco-nave");
        printf("\n 4- Antartida");
        printf("\nPortal:");
        scanf("%d", &caminho);
        printf("\n                                                       ...LOADING...");
        Sleep(2000);
        system("cls");
        fflush(stdin);

        switch(caminho)
        {

//VULCAO
        case 1:

            printf("\n\n Bom, parece que vc entrou no vulcao");
            printf("\n Parabens, vc virou churasco, e morreu!!!");
            printf("\nDigite qualquer tecla para sair\n");
            scanf("%s", &resp);
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");
            fflush(stdin);
//MORREU
            break;


//ERROR
//ARRUMAR


        case 2:
//ILHA DESERTA
            printf("\n\n Ilha deserta?");
            printf("\n Bem, nao me parece tao ruim");
            printf("\n VC VIVE COM SUCESSO");
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");

            printf("\n\n Ok, vc tomou uma otima escolha");
            printf("\n Uma ilha, mesmo que deserta, ainda eh uma grande fonte de mantimentos");
            printf("\nVc tem muitas opcoes qual delas vc fara primeiro");
            printf("\n 1- Construir uma casa");
            printf("\n 2- Construir uma jangada");
            printf("\n 3- Buscar comida");
            printf("\nESCOLHA:");
            scanf("%d", &alternativa);
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");
            fflush(stdin);

            if(alternativa == 1) //MORADIA
            {


                printf("\n\n Sabia escolha, uma moradia eh ecencial, ainda mais nesse periodo chuvoso");
                printf("\nOnde vc fara sua cabana");
                printf("\n1- Beira Mar");
                printf("\n2- Montanha");
                printf("\n3- Caverna");
                printf("\n4- Floresta");
                printf("\nESCOLHA:");
                scanf("%d", &alternativa01);
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                fflush(stdin);

//BEIRA MAR
                if(alternativa01 == 1)
                {

                    printf("\n\nHaa cara...");
                    printf("\nUma grande onda destruiu a sua casa, e vc foi terrivelmente destruida");
                    printf("\nComo vc estava dentro, foi esmagado pelos entulhos e morreu!!!");
                    printf("\nDigite qualquer tecla para sair\n");
                    scanf("%s", &resp);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);
//MORREU
                }
//MONTANHA
                else if(alternativa01 == 2)
                {

                    printf("\n\nBom, o ar, era tao pouco la encima, que vc desmaiou");
                    printf("\nDespencou la de cima, e morreu");
                    printf("\nDigite qualquer tecla para sair\n");
                    scanf("%s", &resp);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);
//MORREU
                }
//CAVERNA
                else if(alternativa01 == 3)
                {

                    printf("\n\nSua escolha foi boa, mas teve um periodo de chuva, lembra?");
                    printf("\nTeve um deslisamento e vc morreu soterrado...");
                    printf("\nOpa, espera ai");
                    printf("Parece que a sua caverna tinha uma passagem secreta, vc caiu num subsolo!");
                    printf("\n1- Olhar em volta");
                    printf("\n2- Andar");
                    printf("\n3- SOS");
                    printf("\nESCOLHA:");
                    scanf("%d", &alternativa02);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);

                    //OLHAR EM VOLTA
                    if(alternativa02 == 1)
                    {

                        printf("\n\nParece que vc ouviu algo, vc...");
                        printf("\n1- Se aproxima, para ver melhor");
                        printf("\n2- Parte para a pancadaria");
                        printf("\n3- Tenta ver de longe");
                        printf("\nESCOLHA:");
                        scanf("%d", &alternativa03);
                        printf("\n                                                       ...LOADING...");
                        Sleep(2000);
                        system("cls");
                        fflush(stdin);

//Se aproximar
                        if(alternativa03 == 1)
                        {

                            printf("\nEh, ainda bem que vc fez isso, aparentemente esse eh o BOSS, o guardiao do portal, que te levara de volta para o mundo real");
                            printf("\nMas olha so, um dragao dormindo");
                            printf("\nComo vc ira vence-lo?");
                            printf("\n1- Lutarei contra ele");
                            printf("\n2- Taparei as narinas dele");
                            printf("\n3- Nao precisa, ele esta dormindo, eh so passar pelo portal");
                            printf("\nESCOLHA:");
                            scanf("%d", &alternativa04);
                            printf("\n                                                       ...LOADING...");
                            Sleep(2000);
                            system("cls");
                            fflush(stdin);

                            if(alternativa04 == 1)
                            {

                                printf("\nPeeeeeee, ma escolha");
                                printf("\n Seu oponente era um dragao, lembra?");
                                printf("\n Vc ja era, foi devorado com uma so bocada");
                                printf("\n Sua coragem foi uma tolice!!!");
                                printf("\nDigite qualquer tecla para sair\n");
                                scanf("%s", &resp);
                                printf("\n                                                       ...LOADING...");
                                Sleep(2000);
                                system("cls");
                                fflush(stdin);
                            }

                            else if(alternativa04 == 2)
                            {

                                printf("\n Tapar as narinas de um dragao, serio?");
                                printf("\n Vc o fez espirrar, e virou churrasco, acho que o seu adiversario gostou");
                                printf("\nDigite qualquer tecla para sair\n");
                                scanf("%s", &resp);
                                printf("\n                                                       ...LOADING...");
                                Sleep(2000);
                                system("cls");
                                fflush(stdin);

                            }

                            else if(alternativa04 == 3)
                            {

                                printf("\n Ideia brilhante");
                                printf("\nE para a sua sorte, parece que este enorme largato tem sono pesado");
                                printf("\nParabens, vc acaba de conquistar a sua liberdade!\n");
                                printf("\nDigite qualquer tecla, para voltar ao mundo real!");
                                scanf("%s", &resp);
                                printf("\n                                                       ...LOADING...");
                                Sleep(2000);
                                system("cls");
                                fflush(stdin);

                            }
                        }//luta final

                        else if(alternativa03 == 2) //Partir para a pancadaria
                        {

                            printf("\nOpa, parece que vc subestimou o seu oponente");
                            printf("\nNa proxima, tente pensar um pouco, seu oponente era poderoso");
                            printf("\nE o derrotou com muita facilidade!!!");
                            printf("\nDigite qualquer tecla para sair\n");
                            scanf("%s", &resp);
                            printf("\n                                                       ...LOADING...");
                            Sleep(2000);
                            system("cls");
                            fflush(stdin);

                        }

//Lutar
                        else if(alternativa03 == 3)
                        {

                            printf("\nA escuridao da caverna nao deixa vc ver direito");
                            printf("\nVc ficou tonto, e caiu no precipicio");
                            printf("\nDigite qualquer tecla para sair\n");
                            scanf("%s", &resp);
                            printf("\n                                                       ...LOADING...");
                            Sleep(2000);
                            system("cls");
                            fflush(stdin);


                        }
                    }//ouviu alguma coisa

                    else if(alternativa02 == 2) //andar
                    {
                        printf("\nVc nao pode andar sem destino nesse breu!!!");
                        printf("\NOu, ao menos nao podia");
                        printf("\nVc nao viu por onde estava andando, tropecou, e caiu num precipicio");
                        printf("\nDigite qualquer tecla para sair\n");
                        scanf("%s", &resp);
                        printf("\n                                                       ...LOADING...");
                        Sleep(2000);
                        system("cls");
                        fflush(stdin);
                    }

                    else if(alternativa02 == 3) //SOS
                    {
                        printf("\nVoce gritou por socorro, mas ninguem apareceu para ajudar");
                        printf("\nVc ficou tao nervoso, que teve um ataque de nervos, derreteu a sua energia socando a parede de pedras");
                        printf("\nE nao teve forcas para continuar");
                        printf("\nDigite qualquer tecla para sair\n");
                        scanf("%s", &resp);
                        printf("\n                                                       ...LOADING...");
                        Sleep(2000);
                        system("cls");
                        fflush(stdin);
                    }
                }

                //caiu no buraco, o que fazer?
//FLORESTA
                else if(alternativa01 == 4)
                {

                    printf("\nSeria uma escolha inteligente, se vc nao estivesse sozinho!");
                    printf("\nVc foi devorado por animais selvagens, sinto muito");
                    printf("\nDigite qualquer tecla para sair\n");
                    scanf("%s", &resp);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);
                }
            }//MORADIA



//JANGADA
            else if(alternativa == 2)
            {

                printf("\n\n Boa escolha, assim vc podera sair da ilha");
                printf("\n...");
                printf("\nMas a sua inesperiencia fala mais alto, nao?");
                printf("\nUma jangada era fraca demais para atravesar o oceano");
                printf("\nUma pena que vc so tenha discuberto isso ha 10km de distancia da ilha");
                printf("\nEm um esfor�o inutiu, vc tentou voltar para a praia, mas seu musculos so aguentaram ate metade do caminho");
                printf("\nDps disso vc afundou, e os tubaroes tiveram uma bela refeicao com a sua carcaca!");
                printf("\nDigite qualquer tecla para sair\n");
                scanf("%s", &resp);
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                fflush(stdin);

            }

//COMIDA
            else if(alternativa == 3)
            {

                printf("\n\n Muito bem, vc eh esperto!");
                printf("\nO que vc escolhera para comer?");
                printf("\n1- Frutas");
                printf("\n2- Insetos");
                printf("\n3- Animais");
                printf("\nESCOLHA:");
                scanf("%d", &alternativa05);
                printf("\n                                                       ...LOADING...");
                Sleep(2000);
                system("cls");
                fflush(stdin);

                if(alternativa05 == 1)
                {

                    printf("\nParece que vc deu o azar de comer uma amora cadeado");
                    printf("\nE morreu assim que a colocou na boca");
                    printf("\nUm fim rapido e indolor");
                    printf("\nDigite qualquer tecla para sair\n");
                    scanf("%s", &resp);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);

                }

                else if(alternativa05 == 2)
                {

                    printf("\nXii, vc comeu os incetos certos, mas esqueceu de limpalos");
                    printf("\nVoce teve colica intestinal, e nao pode proseguir");
                    printf("\nMas os animais selvagens puderam");
                    printf("\nDigite qualquer tecla para sair\n");
                    scanf("%s", &resp);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);
                }

                else if(alternativa05 == 3)
                {

                    printf("\nOk, vc comeu o animal certo, lavou a carne, fez tudo certo");
                    printf("\nMas se animou com o sabor do alimento, e sua gula tomou conta de vc");
                    printf("\nGracas a quantidade de comida ingerida, vc teve disinteria braba");
                    printf("\nMorreu por desnutricao, isso que eh morrer pela boca, hein?");
                    printf("\nDigite qualquer tecla para sair\n");
                    scanf("%s", &resp);
                    printf("\n                                                       ...LOADING...");
                    Sleep(2000);
                    system("cls");
                    fflush(stdin);
                }
            }//o que comer

            break;

//ERROR
//ARRUMAR


//ESPACO-NAVE
        case 3:

            printf("\n\n UAU, vc e corajoso hein?");
            printf("\n Vc permanece vivo");
            printf("\n Vc esta numa espaco-nave, nao foi a melhor escolha, mas ao menos, vc nao virou churrasco");
            printf("\n Antes de tudo, preciso lhe falar que seu oxigenio esta contado");
            printf("\n O que vc ira fazer?");
            printf("\n...");
            printf("\nHaa, verdade, vc nao tem tempo");
            printf("\nDevido a falta de oxigenio vc ficou a deriva no espaco, mls ae");
            printf("\nDigite qualquer tecla para sair\n");
            scanf("%s", &resp);
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");
            fflush(stdin);

            break;






//ANTARTIDA
        case 4:

            printf("\n\nParece que vc caiu em um lugar macio, parabens Gastao");
            printf("\nMas infelismente, terei de lhe informar que, vc sofreu um choque termico");
            printf("\nSendo incapaz de se mover, vc virou so mais uma estatua de gelo");
            printf("\nQuem sabe eu nao te vejo no proximo filme da FROZEM?");
            printf("\nDigite qualquer tecla para sair\n");
            scanf("%s", &resp);
            printf("\n                                                       ...LOADING...");
            Sleep(2000);
            system("cls");
            fflush(stdin);

            break;




//LUGAR NAO SELECIONADO


        }//switch
    }//while


}
