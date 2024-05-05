# Urna Eletrônica

Este é um programa simples em C que simula uma urna eletrônica para uma eleição, permitindo aos eleitores votar em candidatos ou registrar votos nulos e em branco.

## Funcionamento

O programa apresenta opções para os eleitores votarem em quatro candidatos específicos, ou para registrar um voto nulo ou em branco. Ao final da votação, o programa exibe os resultados da eleição, mostrando a quantidade de votos para cada candidato, votos nulos e votos em branco, e declara o vencedor da eleição.

## Como Executar

1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal na pasta onde está o arquivo fonte (`urna_eletronica.c`).
3. Compile o programa usando o compilador C. Por exemplo, usando o GCC:
   ```bash
   gcc -o urna_eletronica urna_eletronica.c
   ```
4. Execute o programa:
   ```bash
   ./urna_eletronica
   ```

## Exemplo de Uso

```
Seja bem vindo a nossa urna eletronica!!
As opcoes de votos sao:
1- Candidato 1
2- Candidato 2
3- Candidato 3
4- Candidato 4
5- Voto nulo
6- Voto em branco

Digite seu voto: 1
Digite seu voto: 2
Digite seu voto: 3
Digite seu voto: 4
Digite seu voto: 5
Digite seu voto: 6
Digite seu voto: 999

Resultado da eleicao:
Candidato 1: 1 votos
Candidato 2: 1 votos
Candidato 3: 1 votos
Candidato 4: 1 votos
Voto nulo..: 1 votos
Voto Branco: 1 votos
O vencedor da eleicao foi o candidato1
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
