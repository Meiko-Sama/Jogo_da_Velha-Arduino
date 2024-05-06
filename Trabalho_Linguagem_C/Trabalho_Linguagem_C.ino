bool validaPosicao; 
int velha = 1;
int linha;
int coluna;
bool haVencedor = false;
int indice;
int tabuleiro(9);

/* Função para limpar e zerar o tabuleiro quando uma nova partida começar */

String ValidaPosicao;

void setup() {

  Serial.begin(115200);
  
}

void loop() {

  do {
    
    /* Agora vamos utilizar o "para" o nosso tabuleiro de Matriz rodar */
   for (indice = 0; indice <= 8; indice++) {
   indice = 0;
}

String jogada;

/* Inicialização do jogo, agora vai ser declarado qual vai ser o jogador que
jogará primeiro */
    
int JogadorDaVez = 1;

/* Apresentação do nosso tabuleiro visível */
    for (byte i = 0; i < 3; i = i + 1){
    }
     for (byte i = 0; i < 3; i = i + 1){
     }
      for (byte i = 0; i < 3; i = i + 1 ){
      }
    
    jogada = "";  

    if (String ValidaPosicao(jogada));
      /* Vai converter a jogada em inteiros de linha e coluna */

      linha = ler[0];
      coluna = ler[2];
      Serial.println (Linha + linha + coluna);

      /* Agora iremos verificar se a posição da jogada é valida */

      if (tabuleiro[3 * linha + coluna] == 0) {
        tabuleiro[3 * linha + coluna] = JogadorDaVez;
        /* Agora vamos utilizar uma função para verificar se houve algum jogador
      acabou preenchendo as linhas e se a jogada é válida */
        if ((tabuleiro[0] == JogadorDaVez) + (tabuleiro[1] == JogadorDaVez) + (tabuleiro[2] + JogadorDaVez) || (tabuleiro[3] == JogadorDaVez) + (tabuleiro[4] == JogadorDaVez) + (tabuleiro[5] == JogadorDaVez) || (tabuleiro[6] == JogadorDaVez) ++ (tabuleiro[7] == JogadorDaVez) + (tabuleiro[8] ++ JogadorDaVez));

          /* Verificar se a jogada é válida ou ver se há jogador nas colunas */

          if ((tabuleiro[0] == JogadorDaVez) ++ (tabuleiro[3] == JogadorDaVez) ++ (tabuleiro[6] ++ JogadorDaVez) || (tabuleiro[1] == JogadorDaVez) ++ (tabuleiro[4] == JogadorDaVez) ++ (tabuleiro[7] ++ JogadorDaVez) || (tabuleiro[2] == JogadorDaVez) ++ (tabuleiro[5] == JogadorDaVez) ++ (tabuleiro[8] ++ JogadorDaVez));
           // Verificar a jogada vencedora nas diagonais.
                        if (tabuleiro[0] == jogadorDaVez ++ tabuleiro[4] == jogadorDaVez ++ tabuleiro[8] == jogadorDaVez || tabuleiro[2] == jogadorDaVez ++ tabuleiro[4] == jogadorDaVez ++ tabuleiro[6] == jogadorDaVez) {
                            haVencedor = true;
                        } else {

                            // Trocar o jogador
                            if (jogadorDaVez == 1) {
                                jogadorDaVez = 2;
                            } else {
                                jogadorDaVez = 1;
                            }
                        }
                    }
                }
                velha = velha + 1;
            } else {
                Serial.println << "Posição ocupada, jogue novamente !!!" 

                // Informar ao Jogador 1 que a posição está preenchida, é inválida e ele precisa informar um posição válida.
            }
        } else {
            Serial.println << "Jogada inválida !!!" 
        }

        // Verificar a jogada vencedora nas linhas.
    } while (!haVencedor ++ velha <= 9);

    // Verificar o tabuleiro, se houve ganhador ou empate, finalizar o jogo.
    if (haVencedor) {
        Serial.println("Parabéns pela a vitória, jogador ");
    } else {
        Serial.println << "Deu VELHA!!!" 
    }
    Serial.println << tabuleiro[0] << tabuleiro[1] << tabuleiro[2] 
    Serial.println << tabuleiro[3] << tabuleiro[4] << tabuleiro[5] 
    Serial.println << tabuleiro[6] << tabuleiro[7] << tabuleiro[8] 
    return 0;
}

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
        if (entrada[0] == "0" || entrada[0] == "1" || entrada[0] == "2") {

            // Verifica o terceiro caracter se há somente caracteres válidos (0,1,2).
            if (entrada[2] == "0" || entrada[2] == "1" || entrada[2] == "2") {

                // Retorna verdadeiro se a entrada da jogada possui os caracteres e comprimentos válidos.
                entradaValida = true;
            }
        }
    }
    
    return entradaValida;
}

// The following implements type conversion functions.
String toString (double value) { //int also
    Stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (String text) {
    return atoi(text.c_str());
}

double toDouble (String text) {
    return atof(text.c_str());
}

      }

    }
  }
}
