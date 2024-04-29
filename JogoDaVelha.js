function main() {
    var haVencedor;

    haVencedor = false;

    // Criar o tabuleiro (Matriz [3][3]) e os jogadores(Opcional). Zerar as variáveis.
    // 
    // 0 - Posição Vazia
    // 1 - Jogada na Posição do Jogador 1
    // 2 - Jogada na Posição do Jogador 2
    var velha;
    var tabuleiro = createArray(9);
    var linha;
    var coluna;

    // Limpar/zerar o tabuleiro
    var indice;

    for (indice = 0; indice <= 8; indice++) {
        tabuleiro[indice] = 0;
    }
    var jogador1;

    jogador1 = "Jogador 1";
    var jogador2;

    jogador2 = "Jogador 2";
    var jogada;
    var jogadorDaVez;

    jogadorDaVez = 1;

    // Iniciar e defenir quem joga primeiro
    // Registrar/Anotar as rodadas do primeiro jogador
    velha = 1;
    do {
        window.alert(tabuleiro[0].ToString() + tabuleiro[1] + tabuleiro[2]);
        window.alert(tabuleiro[3].ToString() + tabuleiro[4] + tabuleiro[5]);
        window.alert(tabuleiro[6].ToString() + tabuleiro[7] + tabuleiro[8]);
        jogada = "";
        window.alert("Digite a posição da sua peça Jogador " + jogadorDaVez);
        jogada = window.prompt('Enter a value for jogada');
        if (validaEntrada(jogada)) {
            linha = parseInt(jogada.charAt(0));
            coluna = parseInt(jogada.charAt(2));
            window.alert("Linha: " + linha + " Coluna: " + coluna);
            if (linha < 3 && coluna < 3) {
                tabuleiro[3 * linha + coluna] = jogadorDaVez;
                if (tabuleiro[0] == jogadorDaVez && tabuleiro[1] == jogadorDaVez && tabuleiro[2] == jogadorDaVez || tabuleiro[3] == jogadorDaVez && tabuleiro[4] == jogadorDaVez && tabuleiro[5] == jogadorDaVez || tabuleiro[6] == jogadorDaVez && tabuleiro[7] == jogadorDaVez && tabuleiro[8] == jogadorDaVez) {
                    haVencedor = true;
                } else {
                    if (tabuleiro[0] == jogadorDaVez && tabuleiro[3] == jogadorDaVez && tabuleiro[6] == jogadorDaVez || tabuleiro[1] == jogadorDaVez && tabuleiro[4] == jogadorDaVez && tabuleiro[7] == jogadorDaVez || tabuleiro[2] == jogadorDaVez && tabuleiro[5] == jogadorDaVez && tabuleiro[8] == jogadorDaVez) {
                        haVencedor = true;
                    } else {
                        if (tabuleiro[0] == jogadorDaVez && tabuleiro[4] == jogadorDaVez && tabuleiro[8] == jogadorDaVez || tabuleiro[2] == jogadorDaVez && tabuleiro[4] == jogadorDaVez && tabuleiro[6] == jogadorDaVez) {
                            haVencedor = true;
                        } else {
                            if (jogadorDaVez == 1) {
                                jogadorDaVez = 2;
                            } else {
                                jogadorDaVez = 1;
                            }
                        }
                    }
                }
                velha = velha + 1;

                // Converter a jogada texto em dois inteiro, linha e coluna
                if (tabuleiro[3 * linha + coluna] == 0) {
                } else {
                    window.alert("Posição inválida/ocupada, jogue novamente");

                    // Informar ao JOGADOR 1 que a posição é invalida/está preenchida. Ele precisa informar outra posição.
                }

                // Verificar o tabuleiro, se alguem ganhou ou empatou, se sim finaliza o jogo
                // Verificar jogada vencedoras nas linhas.
            } else {
                window.alert("Indice invalido");
            }
        } else {
            window.alert("Indice invalido");
        }

        // Verificar se a posição da "jogada" é valida
    } while (!haVencedor && velha <= 9);
    window.alert(tabuleiro[0].ToString() + tabuleiro[1] + tabuleiro[2]);
    window.alert(tabuleiro[3].ToString() + tabuleiro[4] + tabuleiro[5]);
    window.alert(tabuleiro[6].ToString() + tabuleiro[7] + tabuleiro[8]);
    if (haVencedor) {
        window.alert("Foi detectado um vencedor na partida");
        window.alert("Os tambores e as trombetas tocam...");
        window.alert("Parabens pela vitoria Jogador " + jogadorDaVez);
    } else {
        window.alert("O jogo deu velha/empate, jogue de novo para descobrir quem podera ganhar a proxima partida");
    }

    // Isso é algo '-'
}

function validaEntrada(entrada) {
    var retorno;

    retorno = false;
    if (entrada.length() == 3) {
        if (entrada.charAt(0) == "0" || entrada.charAt(0) == "1" || entrada.charAt(0) == "2") {
            if (entrada.charAt(2) == "0" || entrada.charAt(2) == "1" || entrada.charAt(2) == "2") {
                retorno = true;
            }
        }
    }
    
    return retorno;
}

function validaTabuleiro() {
}
