# Braço Robótico

## Integrantes

| Nome | RM |
|---|---|
| Lucas Moreno | RM 97158 |
| Lorenzo Gomes | RM 551117 |
| Leonardo Schunck Rainha | RM 99902 |
| Kayky Oliveira Schunck | RM 99756 |

## Descrição do Projeto

Este projeto simula um braço robótico utilizado em missões espaciais para operações de coleta e recuperação de amostras em ambientes de microgravidade.
O sistema foi desenvolvido utilizando Arduino Uno, dois servomotores e um LED indicador de status. O controle é realizado através do Monitor Serial, permitindo ao operador movimentar o braço robótico e controlar a garra de captura por meio de comandos de teclado.

## Componentes Utilizados

| Componente            |
|-----------------------|
| Arduino Uno           |
| 2 Servomotores        |
| 1 LED                 |
| 1 Resistor de 220 Ω   |
| Protoboard            |
| Jumpers               |

## Funcionalidades

O sistema permite:

- Movimentar o braço para cima.
- Movimentar o braço para baixo.
- Abrir a garra.
- Fechar a garra.
- Indicar visualmente a captura da amostra através de um LED.

## Ligações Utilizadas

| Componente           | Pino Arduino |
|----------------------|--------------|
| Servo do Braço       | D9           |
| Servo da Garra       | D10          |
| LED de Status        | D7           |
| Alimentação dos Servos | 5 V         |
| GND dos Servos       | GND          |

## Como Executar a Simulação

1. **Iniciar o Projeto**
   1. Abra o projeto no Wokwi: https://wokwi.com/projects/466319899097470977.
   2. Clique no botão **Start Simulation**.

2. **Abrir o Monitor Serial**
   1. Na parte inferior da tela do Wokwi, clique em **Serial Monitor**.
   2. Verifique se a velocidade está configurada para **9600 baud**.

3. **Operar o Braço Robótico**
   Digite um dos comandos abaixo no campo do Monitor Serial e pressione Enter.

   | Comando | Função                      |
   |---------|-----------------------------|
   | **U**   | Move o braço para cima      |
   | **D**   | Move o braço para baixo     |
   | **O**   | Abre a garra                |
   | **C**   | Fecha a garra               |

### Exemplo de Operação – Capturar uma amostra

1. Digite: **U** – O braço sobe.
2. Digite: **U** – O braço sobe novamente.
3. Digite: **O** – A garra abre.
4. Digite: **C** – A garra fecha e captura a amostra.
   > O LED acenderá indicando que a amostra foi capturada com sucesso.
5. Digite: **D** – O braço inicia o retorno.
6. Digite: **D** – O braço retorna à posição inicial.

## Indicação do LED

| Estado          | Significado                                 |
|-----------------|---------------------------------------------|
| LED Apagado     | Garra aberta                                |
| LED Aceso       | Garra fechada / amostra capturada           |

## Objetivo

Demonstrar o funcionamento de um sistema robótico simples para operações de coleta de amostras em ambiente espacial, utilizando controle via Monitor Serial e atuadores simulados através de servomotores.
