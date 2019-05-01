Jogo de Xadrez
Fernando Brambilla de Mello


Abstract. This article aims to learn how it works and what are the moves of each chess piece, in which a game is being developed in C + + for the discipline of Object Orientation I of course computer engineering.

Resumo.  Este artigo tem o intuito de aprender como funciona e quais são os movimentos de cada peça de xadrez, na qual está sendo desenvolvido um jogo em C++ para a disciplina de Orientação a objeto I do curso de engenharia da computação. 

1.	 Objetivo 
O principal objetivo do jogo de xadrez é fazer xeque mate,  que é quando uma peça fica em posição de atacar, e finalizar com o rei adversário, e no caso a peça do rei adversário não consegue escapar de ser derrotado e assim fazendo com que o jogo acabe.
2.	Movimentos
Cada peça de xadrez tem o seu respectivo movimento e sua funções como mostrado abaixo.
3. 	Peão
O  Peão só pode se movimentar para frente, sendo a única peça que não se move para trás. Na primeira jogada o peão tem a possibilidade de pular 1 ou 2 casas, a partir da segunda jogada de cada pião, ele poderá se movimentar apenas 1 casa.
O peão pode comer a peça inimiga apenas na diagonal e nunca a da sua frente. O peão tem também uma promoção, na qual se ele conseguir chegar até a outra extremidade do tabuleiro sem ser morto, ele tem o direito de se transformar em uma rainha. 
4.	Bispo
O bispo pode se mover tanto para frente quanto para trás, mas apenas na diagonal e sempre respeitando a regra, e seu movimento na diagonal sempre será em cima da sua cor inicial.
5.	Rei
O Rei se move apenas uma casa por vez em qualquer direção, e nunca poderá ir para uma casa onde está sob ataque, e no caso o rei é a peça mais importante do jogo na qual como a sua morte o jogo é finalizado.
6.	Rainha
A rainha é a peça mais poderosa do xadrez, pois ela se movimenta em todas as direções e pode se mover tanto para frente quanto para trás, o único movimento que a rainha não consegue fazer é o movimento do cavalo.
7.	Cavalo
O cavalo é a única peça no jogo de xadrez, na qual pode pular por cima das outras peças, o cavalo tem um movimento muito especial, em formato de L, na qual este movimento consiste em movimentar-se 2 casas para frente e uma para direita ou esquerda, e também tem a possibilidade de fazer o movimento oposto.  
8.	Torre
A torre pode se movimentar tanto para frente ou para trás, direita ou esquerda e quantas casas quiser, assim como todas as outras peças com exceção do cavalo,  não pode pular nenhuma peça que esteja a sua frente.



