# Edge-GS-Nimbos

O sistema Nimbos utiliza o Arduino Uno como unidade de controle embarcada para realizar o monitoramento local de bueiros em áreas urbanas com risco de alagamento.

Autores
- Maria Eduarda Sousa Acyole de Oliveira `566337`
- Matheus Goes da Silva `566407`
- Mayke Santos `562680`

## 📦 Componentes Utilizados
- Arduino Uno 
- Sensor de peso (célula de carga + HX711)
- Sensor de vazão de água
- Módulo GPS (ex: NEO-6M)
- Módulo Wi-Fi (ESP8266 ou similar)
- LEDs (verde, amarelo, vermelho)
- Bateria recarregável (ex: Li-Ion)

## ⚙️ Funcionamento
### 1. Coleta de Dados
- O sensor de peso detecta acúmulo de sujeira no bueiro.
- O sensor de vazão mede a velocidade da água para verificar se há obstruções.
- O GPS registra a localização exata do bueiro.

### 2. Processamento Local
O Arduino processa os dados dos sensores e classifica o risco de alagamento:

Verde: Sem risco.
Amarelo: Atenção.
Vermelho: Risco de alagamento iminente.

### 3. Sinalização
- LEDs indicam localmente o nível de risco detectado.
- Envio de Dados
- Os dados processados são enviados via Wi-Fi para a plataforma online do Nimbos.


## Demonstração em vídeo

## Como Reproduzir

1. Montagem do Circuito:

2. Carregando o Código:
- Abra o Arduino IDE.
- Baixe ou copie o código-fonte do projeto.
- Selecione a placa correta (ex: Arduino Uno) e a porta.
- Clique em "Upload" para carregar o código na sua placa.
  
3. Testando o Sistema:
