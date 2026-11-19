# Aula 16 — Revisão

**6. Qual é a diferença entre char e uma string?**  
`char` armazena um único caractere. Uma string é uma sequência de caracteres armazenada em um vetor de `char` e terminada por `\0`.

**7. Por que uma string precisa do caractere `\0`?**  
Ele indica onde a string termina, permitindo que as funções saibam quando parar de ler os caracteres.

**8. Qual é a diferença entre `scanf("%s", ...)` e `fgets(...)`?**  
`scanf` com `%s` para no primeiro espaço em branco. `fgets` consegue ler uma linha com espaços e respeita o limite do vetor informado.
