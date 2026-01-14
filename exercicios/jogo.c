#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zerar(int tam, char matriz[tam][tam+1])
{
  for(int l = 0; l < tam; l++)
  {
   for(int c = 0; c < tam; c++)
   {
    matriz[l][c] = '_';
   }
  }
}

void inicializar(int tam, char matriz[tam][tam+1])
{
  char caracter = '1';
  int numero_itens = (tam*tam)/2;

  for(int item = 1; item <= numero_itens; item++)
  {
    for(int qtd = 1; qtd <= 2; )
    {
      int c_l = rand()%tam;
      int c_c = rand()%tam;

      if(matriz[c_l][c_c] == '_')
      {
        matriz[c_l][c_c] = caracter;
        qtd++;
      }
    }

    caracter++;
  }
}

void imprimir(int tam, char matriz[tam][tam+1])
{
  for(int l = 0; l < tam; l++)
    {
       for(int c = 0; c < tam ; c++)
       {
        printf("%c ", matriz[l][c]);
       }
      printf("\n");
    }
}

void imprimirJogo(int tam, char jogo[tam][tam+1], char gabarito[tam][tam+1], int pedra1_l, int pedra1_c, int pedra2_l, int pedra2_c)
{
  jogo[pedra1_l][pedra1_c] = gabarito[pedra1_l][pedra1_c];
  jogo[pedra2_l][pedra2_c] = gabarito[pedra2_l][pedra2_c];

  imprimir(tam, jogo);
}

int verificarAcerto(int tam, char jogo[tam][tam+1], int pedra1_l, int pedra1_c, int pedra2_l, int pedra2_c)
{
  if(jogo[pedra1_l][pedra1_c] != jogo[pedra2_l][pedra2_c])
  {
    jogo[pedra1_l][pedra1_c] = '_';
    jogo[pedra2_l][pedra2_c] = '_';

    return 0;
  }
  return 1;
}

int main()
{
  srand(time(NULL));

  int tam = 4;
  char gabarito[tam][tam+1];
  char jogo[tam][tam+1];

  zerar(tam, jogo);

  zerar(tam, gabarito);
  inicializar(tam, gabarito);

  imprimir(tam, gabarito);

  int pontuacaoJ1 = 0;
  int pontuacaoJ2 = 0;

  int vez = 1;

  do
  {
    imprimir(tam, jogo);

    printf("\nJogador %i está jogando...\n\n", vez);

    int pedra1_l, pedra1_c;
    printf("Pedra 1 > ");

    scanf("%i %i", &pedra1_l, &pedra1_c);
    getchar();

    int pedra2_l, pedra2_c;
    printf("Pedra 2 > ");

    scanf("%i %i", &pedra2_l, &pedra2_c);
    getchar();

    imprimirJogo(tam, jogo, gabarito, pedra1_l, pedra1_c, pedra2_l, pedra2_c);

    if(vez == 1)
    {
      pontuacaoJ1 += verificarAcerto(tam, jogo, pedra1_l, pedra1_c, pedra2_l, pedra2_c);
      printf("\nPontuação: %i", pontuacaoJ1);

      vez = 2;
    }
    else
    {
      pontuacaoJ2 += verificarAcerto(tam, jogo, pedra1_l, pedra1_c, pedra2_l, pedra2_c);
      printf("\nPontuação: %i", pontuacaoJ2);

      vez = 1;
    }

    printf("\n");

  }while(1);

  return 0;
}