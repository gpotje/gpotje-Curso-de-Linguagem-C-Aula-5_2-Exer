#include <stdio.h> 
#include <locale.h>

main(){
		
		setlocale(LC_ALL,"Portuguese");
	
	  		int N1, N2 ;
			
  			printf("Digite o primeiro numero: ");
  			scanf("%i", &N1);
  			
  			printf("Digite o segundo numero: ");
			scanf("%i", &N2);

 			if (N1 == N2)
    			printf("Os numeros são iguais!");
					else if(N1 > N2)
						printf("O maior valor é = %i", N1);
							else
								printf("O maior valor é = %i", N2);
					 
}
