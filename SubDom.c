#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, char *argv[]){

    printf(
       "   ____        _      ____                   \n"
       "  / ___| _   _| |__  |  _ \\  ___  _ __ ___   \n"
       "  \\___ \\| | | | '_ \\ | | | |/ _ \\| '_ ` _ \\  \n"
       "   ___) | |_| | |_) || |_| | (_) | | | | | | \n"
       "  |____/ \\__,_|_.__(_)____/ \\___/|_| |_| |_| \n"
       "\n"
       "By Squ4nch\n"
       "\n" 
       );


    if ( argc != 3) {
    
        printf("\nModo de uso:\n");
        printf("\t%s <site> <wordlist>\n\n", argv[0]);
        return 1;
    
    }
    
    char *alvo;
    alvo = argv[1];  

    struct hostent *target = gethostbyname(alvo);

    if ( target == NULL ) {
    
        printf("\n[-] Url inválida!\n");
        return 1;
    
    } 

    printf("[*] Alvo: %s\n", argv[1]);

    FILE *arquivo;
    arquivo = fopen(argv[2], "r");

    if ( !arquivo ){
    
        printf("\n[-] Wordlist inválida\n");
        return 1;
    
    }
    
    printf("[*] Wordlist: %s\n", argv[2]);
    printf("[*] Enumerando subdominios:\n\n");

    char sub[50];
    int cont = 0;
    while ( (fscanf(arquivo, "%s", sub)) != EOF ){
        
        strcat( sub, "." );
        strcat( sub, alvo );
        target = gethostbyname(sub);
        if ( target == NULL )
            continue;

        printf("\t%s\n", sub);
        cont ++;
    }
    printf("\n");
    if ( cont == 0 )
        printf("[-] Nenhum subdominio encontrado!\n");

    fclose(arquivo);
    return 0;

}
