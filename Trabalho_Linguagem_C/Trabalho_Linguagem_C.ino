int velha = 1;
int linha;
int coluna;
bool haVencedor = false;
int indice;
int tabuleiro[9];
String jogada;
String jogador1 = "Jogador 1";
String jogador2 = "Jogador 2";
int JogadorDaVez = 1;

bool validaPosicao(String entrada) {
  // Função para validar a entrada da jogada por meio de texto, o formato deve ser:
  // Primeiro caracter: 0 ou 1 ou 2
  // Segundo caracter: qualquer um
  // Terceiro caracter: 0 ou 1 ou 2
  bool entradaValida;

  entradaValida = false;

  // A entra da jogadanão pode ter mais que 3 caracteres de comprimento.
  if (entrada.length() == 3) {

    // Verifica o primeiro caracter se há somente caracteres válidos (0,1,2).
    if (entrada[0] == '0' || entrada[0] == '1' || entrada[0] == '2') {

      // Verifica o terceiro caracter se há somente caracteres válidos (0,1,2).
      if (entrada[2] == '0' || entrada[2] == '1' || entrada[2] == '2') {

        // Retorna verdadeiro se a entrada da jogada possui os caracteres e comprimentos válidos.
        entradaValida = true;
      }
    }
  }

  return entradaValida;
}


void setup() {

  Serial.begin(115200);
  for (indice = 0; indice <= 8; indice++) {
    tabuleiro[indice] = 0;
  }
}

void loop() {

  do {
    Serial.print(tabuleiro[0]);  
    Serial.print(tabuleiro[1]);             
    Serial.println(tabuleiro[2]);
    Serial.print(tabuleiro[3]);
    Serial.print(tabuleiro[4]); 
    Serial.println(tabuleiro[5]);
    Serial.print(tabuleiro[6]); 
    Serial.print(tabuleiro[7]);
    Serial.println(tabuleiro[8]);
    jogada = "";
    Serial.println("Digite a posição da sua peça Jogador" + String(JogadorDaVez));
    while (!Serial.available());
 
    jogada = Serial.readString();
    if (validaPosicao(jogada)) {
      linha = jogada[0] - '0';
      coluna = jogada[2] - '0';
      
//linha = int(jogada[0]);
//coluna = int(jogada[2]);
      
      Serial.print("Linha: ");
      Serial.println(linha);
      Serial.print("Coluna: ");
      Serial.println(coluna);
    }


    if (tabuleiro[3 * linha + coluna] == 0) {

      tabuleiro[3 * linha + coluna] = JogadorDaVez;
      } else {

      if (tabuleiro[0] == JogadorDaVez && tabuleiro[1] == JogadorDaVez && tabuleiro[2] == JogadorDaVez || tabuleiro[3] == JogadorDaVez && tabuleiro[4] == JogadorDaVez && tabuleiro[5] == JogadorDaVez || tabuleiro[6] == JogadorDaVez && tabuleiro[7] == JogadorDaVez && tabuleiro[8] == JogadorDaVez) {
      haVencedor = true;
      } else {
         
        if (tabuleiro[0] == JogadorDaVez && tabuleiro[3] == JogadorDaVez && tabuleiro[6] == JogadorDaVez || tabuleiro[1] == JogadorDaVez && tabuleiro[4] == JogadorDaVez && tabuleiro[7] == JogadorDaVez || tabuleiro[2] == JogadorDaVez && tabuleiro[5] == JogadorDaVez && tabuleiro[8] == JogadorDaVez) {
            haVencedor = true;
          
          if (tabuleiro[0] == JogadorDaVez && tabuleiro[4] == JogadorDaVez && tabuleiro[8] == JogadorDaVez || tabuleiro[2] == JogadorDaVez && tabuleiro[4] == JogadorDaVez && tabuleiro[6] == JogadorDaVez) {
            haVencedor = true;
            } else {

            if (JogadorDaVez == 2) {
              JogadorDaVez = 1;
              } else {
              JogadorDaVez = 2;
              Serial.println ("faça sua jogada" + JogadorDaVez);
            }
          }
        }
      }
      velha = velha + 1;
     
      Serial.println("Posição ocupada, jogue novamente !!!");

      // Informar ao Jogador 1 que a posição está preenchida, é inválida e ele precisa informar um posição válida.
     
  } }

  // Verificar a jogada vencedora nas linhas.


  while (!haVencedor && velha <= 8);

   // Verificar o tabuleiro, se houve ganhador ou empate, finalizar o jogo.
   if (!haVencedor) { 
   Serial.println("Parabéns pela a vitória, jogador ");
   } else {
   Serial.println("Deu VELHA!!!");
   }
   Serial.print(tabuleiro[0]);
   Serial.print(tabuleiro[1]);
   Serial.println(tabuleiro[2]);
   Serial.print(tabuleiro[3]);
   Serial.print(tabuleiro[4]); 
   Serial.println(tabuleiro[5]);
   Serial.print(tabuleiro[6]);
   Serial.print(tabuleiro[7]); 
   Serial.println(tabuleiro[8]);
    //return 0;
} 

