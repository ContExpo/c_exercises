#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//START PUNTATORI

/** Restituisce il valore dell'intero puntato da ptr */
int return_value_fixed(const int *ptr) {

}

/** Imposta a value il valore dell'intero puntato da ptr */
void set_int_value(const int *ptr, const int value) {

}

/** Imposta il valore della zona di memoria puntata da ptr2 uguale a quello della zona puntata da ptr1 */
void set_pointed_value(const int *ptr1, const int *ptr2) {

}

/** Scambia i valori di a e b all'interno della funzione */
void value_swap(int a, int b) {
    //Opzionale
}

/** Scambia i contenuti delle zone di memoria puntati da a e b*/
void swap(const int *a, const int *b) {

}

/** Scambia il valore dei primi N byte puntati da a e b*/
void swap_bytes(const void *a, const void *b, size_t bytes) {

}

//END PUNTATORI
//START STRINGHE

/**
 * \brief Calcola la lunghezza della stringa ESCLUDENDO il carattere
 * \param str la stringa da misurare
 * \return lunghezza della stringa
 */
size_t itis_strlen(const char *str) {

}

/**
* \brief Copia la stringa indicata da source in destination, fermandosi a n caratteri.
	Restituisce -1 se si trova un \0 prima di aver copiato n caratteri o se i parametri non sono validi
	(es: puntatori nulli, n < 0)
 * \param destination Stringa di destinazione
 * \param source Stringa di origine
 * \param n Numero di caratteri da copiare
 * \return il numero di caratteri copiati se la copi ha successo, -1 altrimenti
 */
int itis_strcpy(char *destination, const char *source, const size_t n) {

}

/**
* \brief Cancella length caratteri dalla stringa, partendo dal carattere con indice indicato da first char.
	Restituisce -1 se non è possibile farlo (length negativa o troppo lunga, first_char sbagliato)
 * \param str La stringa da modificare
 * \param first_char L'indice del pirmo carattere da cancellare
 * \param n Il numero di caratteri da cancellare
 * \return il numero di caratteri cancellati se la copi ha successo, -1 altrimenti
 */
int itis_delete_substr(const char *str, const int first_char, const size_t n) {

}
//END STRINGHE

int main()
{
    test_all_assertions(1);

}

void test_all_assertions(int only_strings) {

    //START POINTERS
    if (!only_strings){
        int a1 = 5;
        assert(return_value_fixed(&a1) == 5);

        int b1 = 5;
        int b2 = 10;
        set_int_value(&b1, b2);
        assert(b2 == 5);

        int c1 = 5;
        int c2 = 10;
        set_pointed_value(&c1, &c2);
        assert(c2 == 5);

        int d1 = 5;
        int d2 = 10;
        swap(&d1, &d2);
        assert(d1 == 10 && d2 == 5);

        char str1[] = "ciao!";
        char str2[] = "hello";
        swap_bytes((void*)str1, (void*)str2, 3);
        assert(!strcmp(str1, "helo!"));
        assert(!strcmp(str2, "cialo"));
    }
    //END POINTERS


    //START STRINGS
    assert(itis_strlen("superprova") == 10);

    char str3[] = "ciao!";
    char str4[] = "hello";

    //Caso base
    itis_strcpy(str4, str3, 5);
    assert(!strcmp(str3, str4));
    assert(str3 != str4);

    //metà stringa
    strcpy(str3, "ciao!");
    strcpy(str4, "hello");
    itis_strcpy(str4, str3, 3);
    assert(!strcmp(str3, "ciao!"));
    assert(!strcmp(str4, "cialo"));

    //n troppo grande
    strcpy(str3, "ciao!");
    strcpy(str4, "hello");
    assert(itis_strcpy(str4, str3, 6) == -1);


    //Puntatori nulli
    strcpy(str3, "ciao!");
    strcpy(str4, "hello");
    assert(itis_strcpy(NULL, str3, 5) == -1);
    assert(itis_strcpy(str4, NULL, 5) == -1);
    assert(strcmp(str3, str4));
    assert(str3 != str4);

    //N < 0
    strcpy(str3, "ciao!");
    strcpy(str4, "hello");
    assert(itis_strcpy(str4, str3, -2) == -1);
    assert(strcmp(str3, str4));
    assert(str3 != str4);

    //Test substringa normale
    char str5[] = "test_stringhe";
    itis_delete_substr(str5, 0, 5);
    assert(!strcmp(str5, "stringhe"));

    //Substringa alla fine
    strcpy(str5, "test_stringhe");
    itis_delete_substr(str5, 5, 9);
    assert(strcmp(str5, "test"));

    //Stringa intera
    strcpy(str5, "test_stringhe");
    itis_delete_substr(str5, 0, 13);
    assert(strlen(str5) == 0);

    //Indice negativo
    strcpy(str5, "test_stringhe");
    assert(itis_delete_substr(str5, -1, 13) == -1);
    assert(!strcmp(str5, "test_stringhe"));

    //Troppi caratteri
    strcpy(str5, "test_stringhe");
    assert(itis_delete_substr(str5, 0, 14) == -1);
    assert(!strcmp(str5, "test_stringhe"));
    //END STRINGS
}
