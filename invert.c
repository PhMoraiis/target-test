#include <stdio.h>
#include <string.h>

int main (void) {
    char entrada [] = "Hello";
    size_t tamanho = strlen (entrada);
    for(int i = 0; i < tamanho / 2; i++) {
       char temp = entrada [i];  // Armazena o caracter inicial
       entrada[i] = entrada [tamanho - i - 1]; // Troca o caracter
       entrada [tamanho - i - 1] = temp; // Armazena o character inicial no entrada
    }
    printf("%s", entrada);
}