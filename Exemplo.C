#include <stdio.h>
int main()
{
	int dia = 0;
	
	printf("Favor informe um numero/n");
	scanf("%d",&dia);
	
	switch(dia)
	{
	case 1:
		printf("o numero informado representa domingo\n");
	break;
	case 2:
		printf("o numero informado representa segunda\n");
	break;
	case 3:
		printf("o numero informado representa terça\n");
	break;
	case 4:
		printf("o numero informado representa quarta\n");
	break;
	case 5:
		printf("o numero informado representa quinta\n");
	break;
	case 6:
		printf("o numero informado representa sexta\n");
	break;
	case 7:
		printf("o numero informado representa sabado\n");
	default:
		printf("nao corresponde a nenhum dia da semana\n");
	}
	return(0);
}