#include <stdio.h>
#include <conio.h>

int main(){
	char first_char = _getch();
	if(first_char == '.'){
		char javab[100] = "";
		char fake[] = "cmd javabe mano bede";
		int i = 0;
		while(1){
			javab[i] = _getch();
			printf("%c" , fake[i]);
			if(javab[i] == '.')
			{
				javab[i] = '\0';
				break;
			}
			i++;
		}
		getchar();
		printf("%s" , javab);
	}
	else{
		printf("%c" , first_char);
		getchar();
		printf(" Agha man faghat be sahabam javab midam ");
	}
}
