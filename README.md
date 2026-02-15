Gate WiFi Controller (Controle de Portão via ESP32)

Este projeto tem como objetivo o controle remoto de abertura e fechamento de dois portões utilizando um microcontrolador ESP32. O sistema integrará comunicação via RF (Radiofrequência) e uma interface web para acionamento simplificado.
🚀 Status do Projeto

Atualmente, o projeto está em sua fase inicial de desenvolvimento.

    Concluído: Configuração do ambiente com PlatformIO.

    Concluído: Implementação da lógica de conexão WiFi e feedback visual via LED.

    Em andamento: Integração com módulos RF e desenvolvimento do servidor web.

🛠️ Tecnologias Utilizadas

    Hardware: ESP32 (DevKit V1).

    Framework: Arduino.

    IDE: Visual Studio Code com a extensão PlatformIO IDE.

📋 Funcionalidades Planejadas

    [x] Conexão automática com rede WiFi configurada.

    [ ] Interface Web responsiva para controle dos portões.

    [ ] Acionamento de dois portões independentes via sinais de RF.

    [ ] Feedback de status da conexão em tempo real.

📂 Estrutura do Projeto

    src/: Contém o código-fonte principal (main.cpp).

    include/: Destinado a arquivos de cabeçalho (.h).

    lib/: Reservado para bibliotecas privadas do projeto.

    test/: Pasta para testes unitários utilizando o PlatformIO Test Runner.

🔧 Configuração e Compilação

O projeto utiliza uma taxa de transmissão de 921600 baud para monitoramento serial.

    Certifique-se de ter o VS Code e o PlatformIO instalados.

    Clone o repositório.

    Altere as credenciais de WiFi no arquivo src/main.cpp (se necessário).

    Clique em Build e depois em Upload no painel do PlatformIO.
