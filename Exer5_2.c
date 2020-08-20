#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,media;
	
		printf("digite a nota 1: \n");
	    scanf("%f",&n1);
		
		printf("digite a nota 2: \n");
	    scanf("%f",&n2);
	
	
	media = (n1+n2)/2;
	
	if (media >= 0 && media <= 4 ){
			printf("o aluno foi reprovado!!!\n\n");
		
	}else  if(media > 4 && media <= 7 ) {
	
		printf("o aluno esta de exame!!!\n\n");
		
	}else  if(media > 7 && media <= 10 ) {
	
		printf("o aluno foi aprovado!!!\n\n");
		
	}else {
		printf("Erro !! caractere invalido digitado \n\n");
	}
system("pause");

}
