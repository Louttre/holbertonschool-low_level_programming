#include <unistd.h>
#include <string.h>

int main(void) 
{
    char *erreur = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, erreur, strlen(erreur));
    return 1;
}
