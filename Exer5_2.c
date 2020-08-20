#include <stdio.h>


main(){
	float n1,n2,media;
	
		printf("digite a nota 1\n\n");
	scanf("%f",&n1);
		
		printf("digite a nota 2\n\n");
	scanf("%f",&n2);
	
	
	media = (n1+n2)/2;
	
	if (media >= 7 && media <= 10){
		printf("o aluno foi aprovado!!!\n\n");
		
		
	}else  if(media <= 7 && media >= 4) {
	
		printf("o aluno esta de exame!!!\n\n");
		
	}else {
		
		printf("o aluno foi reprovado!!!\n\n");
		
	}
system("pause");

}
