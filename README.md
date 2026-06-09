# Braço Robótico de Coleta de Amostras (Docking & Retrieval)

## Integrantes

| Nome                    | RM        |
| ----------------------- | --------- |
| Lucas Moreno            | RM 97158  |
| Lorenzo Gomes           | RM 551117 |
| Leonardo Schunck Rainha | RM 99902  |
| Kayky Oliveira Schunck  | RM 99756  |

---

## Descrição do Projeto

Este projeto simula um braço robótico utilizado em missões espaciais para operações de coleta e recuperação de amostras em ambientes de microgravidade.

O sistema foi desenvolvido utilizando um Arduino Uno, dois servomotores e um LED de status. O controle é realizado através do Monitor Serial, permitindo ao operador movimentar o braço robótico e controlar a garra por meio de comandos de teclado.

---

## Objetivo

Demonstrar o funcionamento de um sistema robótico simples para operações de coleta de amostras em ambiente espacial, utilizando controle via Monitor Serial e atuadores simulados através de servomotores.

---

## Componentes Utilizados

| Componente          |
| ------------------- |
| Arduino Uno         |
| 2 Servomotores      |
| 1 LED               |
| 1 Resistor de 220 Ω |
| Protoboard          |
| Jumpers             |

### Observação Técnica

Os servomotores foram alimentados com 5 V, conforme especificado no enunciado do projeto.

Em aplicações reais, recomenda-se utilizar um capacitor eletrolítico entre 5 V e GND para aumentar a estabilidade da alimentação dos servos e evitar quedas de tensão durante movimentos simultâneos.

---

## Estrutura do Sistema

| Componente           | Função                                             |
| -------------------- | -------------------------------------------------- |
| Servo do Braço (D9)  | Controla a articulação principal do braço robótico |
| Servo da Garra (D10) | Controla a abertura e fechamento da garra          |
| LED de Status (D7)   | Indica o estado da garra                           |

---

## Ligações Utilizadas

| Componente             | Pino Arduino |
| ---------------------- | ------------ |
| Servo do Braço         | D9           |
| Servo da Garra         | D10          |
| LED de Status          | D7           |
| Alimentação dos Servos | 5 V          |
| GND dos Servos         | GND          |

---

## Link do Projeto

Wokwi:

https://wokwi.com/projects/466319899097470977

---

## Como Executar a Simulação

### 1. Iniciar o Projeto

1. Abra o link do projeto no Wokwi.
2. Clique em **Start Simulation**.

### 2. Abrir o Monitor Serial

1. Clique em **Serial Monitor** na parte inferior da tela.
2. Verifique se a velocidade está configurada para **9600 baud**.

### 3. Operar o Braço Robótico

Digite um dos comandos abaixo e pressione Enter.

| Comando | Função                  |
| ------- | ----------------------- |
| U       | Move o braço para cima  |
| D       | Move o braço para baixo |
| O       | Abre a garra            |
| C       | Fecha a garra           |

---

## Exemplo de Operação

### Captura de uma Amostra

1. Digite **U** para elevar o braço.
2. Digite **U** novamente para aproximar o braço da amostra.
3. Digite **O** para abrir a garra.
4. Digite **C** para fechar a garra.
5. O LED acenderá indicando que a garra encontra-se fechada.
6. Digite **D** para iniciar o retorno.
7. Digite **D** novamente para retornar à posição inicial.

---

## Indicação do LED

| Estado      | Significado   |
| ----------- | ------------- |
| LED Apagado | Garra aberta  |
| LED Aceso   | Garra fechada |

---

## Funcionamento Geral

O braço robótico inicia em posição neutra. Através do Monitor Serial, o operador pode movimentar a articulação principal do braço utilizando os comandos U e D, enquanto os comandos O e C controlam a abertura e fechamento da garra.

O LED de status fornece uma indicação visual do estado atual da garra, auxiliando na operação do sistema durante a simulação.

---

## Biblioteca Utilizada

```cpp
#include <Servo.h>
```

Biblioteca padrão da plataforma Arduino para controle de servomotores.
