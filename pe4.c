#include <stdio.h>

void number_pyramid(int x)
{
	int i, j, k=0, a=0, b=0;
	for (i=1;i<=x;i++){
		for(j =1; j<=(x-i); j++){
			printf(" ");
			a++;
			}
			while(k!=((2*i)-1)){
				if(a<=(x-1)){
					printf("%d", i+k);
					a++;}
					else{
						b++;
						printf("%d",(i+k-2*b));
					}
					k++;
			}
			b = a = k= 0;
			printf("\n");
	}

	
}

void character_pyramid(int x, char c){
       int i, j, k=0, a=0, b=0;
	   for (i=1;i<=x; i++){
		   for(j =1; j<=(x-i); j++){
			   printf(" ");
			   a++;
			   }
			   while(k!=((2*i)-1)){
				   if(a<=(x-1)){
					   printf("%c", c+k);
					   a++;
					   }
					   else{
						   b++;
						   printf("%c",(c+k-2*b));
						}
						k++;
			}
			b = a = k= 0;
			printf("\n");
	}
}

int main(void){
	int x;
	char c;
	printf("Number of rows:");
    scanf("%d",&x);
	number_pyramid(x);
	printf("Number of rows and first char:");
	scanf("%d %c", &x, &c);
	character_pyramid(x,c);
	return 0;
	}
