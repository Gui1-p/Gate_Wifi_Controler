# Gate WiFi Controller (Controle de Portão via ESP32)

Este projeto consiste em um sistema de controle remoto para a abertura e fechamento de dois portões utilizando um microcontrolador ESP32. O sistema integra comunicação via Radiofrequência (RF) e uma interface web para acionamento remoto via Wi-Fi.

## 🚀 Status do Projeto
O projeto está em sua fase inicial de desenvolvimento.
- [x] Configuração do ambiente de desenvolvimento com PlatformIO.
- [x] Implementação da lógica básica de conexão WiFi.
- [x] Feedback visual de status de conexão via LED (Pino 5).
- [ ] Implementação do servidor Web para controle dos botões.
- [ ] Integração com módulos transmissores de RF.
- [ ] Acionamento independente para dois portões.

## 🛠️ Tecnologias Utilizadas
- **Hardware:** ESP32 DevKit V1.
- **Framework:** Arduino.
- **Ambiente:** VS Code com extensão PlatformIO IDE.
- **Linguagem:** C++ (Arduino).

## 📂 Estrutura de Pastas
- `src/`: Contém o código-fonte principal (`main.cpp`).
- `include/`: Destinado a arquivos de cabeçalho (.h).
- `lib/`: Reservado para bibliotecas privadas do projeto.
- `test/`: Pasta para testes unitários utilizando o PlatformIO Test Runner.

## 🔧 Como Executar
O projeto está configurado para uma velocidade de monitoramento serial de **921600 baud**.

1.  Clone o repositório.
2.  Abra a pasta do projeto no VS Code com o PlatformIO instalado.
3.  No arquivo `src/main.cpp`, altere as credenciais da rede:
    - **SSID:** `nome da rede`
    - **Senha:** `senha da rede`
4.  Conecte o ESP32 e realize o **Upload** através do ícone na barra inferior do PlatformIO.

## 📝 Funcionamento Atual
Ao iniciar, o ESP32 tenta se conectar à rede WiFi configurada. Durante a tentativa, o LED conectado ao pino 5 pisca em intervalos curtos. Uma vez estabelecida a conexão, o LED permanece aceso continuamente para indicar que o dispositivo está online.
