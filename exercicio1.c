#include <stdio.h>

int main() {
    int n,n2,n3,res;
    char palavra[80];
    printf("O meu nome:\n");
    gets (palavra);
    printf("\n");
        scanf("%d",&n);
    printf("\n");
        scanf("%d", &n2);
    printf("\n");
        scanf("%d",&n3);

res=n2-n;

printf("+-------------------+\n");
printf("| Dias de vida para |\n");
printf("| %3s   |\n",palavra);
printf("+-------------------+\n");
printf("| %3d          |\n",res);
printf("+-------------------+\n");
}

