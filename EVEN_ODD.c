#include <stdio.h>
int main(){
	int x;
	printf("Insert Integer : ");
	scanf("%d",&x);
	
	if (x & 1 == 1)
		printf("Output is Odd\n", x);
	else
		printf("Output is Even\n", x);

return 0;
}
