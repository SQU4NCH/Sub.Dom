# Sub.Dom
Um programa em C para enumeração de subdomínios de forma passiva

A ideia é conseguir o maior número de informações sobre subdomínios da aplicação sem interagir com a aplicação

A ferramenta encontra os subdomínios através de resolução de DNS, tentando resolver os nomes passados através da wordlist e retornando aqueles que são válidos sem realizar nenhuma requisição ao site, consequentemente não gerando logs

## Instalação

1) `` wget https://raw.githubusercontent.com/SQU4NCH/Sub.Dom/main/SubDom.c ``
2) `` gcc SubDom.c -o SubDom ``
3) `` ./SubDom ``

## Modo de usar

```
➜  C ./SubDom
   ____        _      ____
  / ___| _   _| |__  |  _ \  ___  _ __ ___
  \___ \| | | | '_ \ | | | |/ _ \| '_ ` _ \
   ___) | |_| | |_) || |_| | (_) | | | | | |
  |____/ \__,_|_.__(_)____/ \___/|_| |_| |_|

By Squ4nch


Modo de uso:
        ./SubDom <site> <wordlist>
```

## Exemplo

```
➜  C ./SubDom google.com ../teste.txt
   ____        _      ____
  / ___| _   _| |__  |  _ \  ___  _ __ ___
  \___ \| | | | '_ \ | | | |/ _ \| '_ ` _ \
   ___) | |_| | |_) || |_| | (_) | | | | | |
  |____/ \__,_|_.__(_)____/ \___/|_| |_| |_|

By Squ4nch

[*] Alvo: google.com
[*] Wordlist: ../teste.txt
[*] Enumerando subdominios:

        www.google.com
        mail.google.com
```
