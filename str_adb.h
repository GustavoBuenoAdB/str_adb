#define PTR_NULO ((void*) 0x00)

/** 
 * @brief aloca um vetor de caracteres com o tamanho indicado
 * 
 * Retorna PTR_NULO caso falhe a alocação.
*/
char* aloca_str(int tam);
/** 
 * @brief retorna o tamnho da string incluindo o '\0'.
*/
int tam_str(char* str);
/** 
 * @brief retorna o tamnho da string até um determinado char c incluindo o c.
*/
int tam_str_char(char* str, char c);
/** 
 * @brief copia uma string em outra.
*/
void copia_str(char* str, char* str_copiada);
/** 
 * @brief aloca e retorna uma nova copia de uma string.
*/
char* cria_copia_str(char* str);
/** 
 * @brief troca todos os caracteres de uma string por um caracter especifico.
*/
void preenche_str(char* str, char c);
/** 
 * @brief retorna o numero de diferenças entre as 2 strings e 0 caso elas sejam iguais.
*/
int compara_str(char* str1, char* str2);
/** 
 * @brief aloca uma nova string e copia ambas as strings para a nova string alocada.
*/
char* concatena_str(char* str1, char* str2);
/** 
 * @brief retorna a posição em que a substring é encontrada a primeira vez, ou -1 caso não encontre.
*/
int sub_str(char* str, char* substr);
/** 
 * @brief retorna a quantidade de vezes que uma string aparece como substring de outra string
*/
int quant_sub_str(char* str, char* substr);
/** 
 * @brief separa uma string em N strings utilizando um caracter especifico como separador.
*/
char** separa_str_char(char* str, char c);
/** 
 * @brief separa uma string em duas, em uma posição especifica.
*/
char** separa_str_pos(char* str, int posicao);
/** 
 * @brief substitui uma substring por outra, retorna 1 se substituiu ou 0 se não encontrou.
*/
int substitui_sub_str(char* str, char* sub_str, char* nova_sub_str);
/** 
 * @brief substitui todas as aparicoes de uma substring por outra, retorna o numero de substituicoes.
*/
int substitui_str(char* str, char* sub_str, char* nova_sub_str);
/** 
 * @brief ordena os caracteres da string alfabeticamente.
*/
char* ordena_str(char* str);
/** 
 * @brief cria um histograma de frequencia dos caracteres ASCII de uma string
*/
int* hist_str(char* str);

// função de grau superior de operação de caracter?