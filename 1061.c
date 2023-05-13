// beecrowd | 1061
// Tempo de um Evento
// Adaptado por Neilor Tonin, URI  Brasil

// Timelimit: 1
// Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

// Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

// Entrada
// Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

// Saída
// Na saída, deve ser apresentada a duração do evento, no seguinte formato:

// W dia(s)
// X hora(s)
// Y minuto(s)
// Z segundo(s)

// Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

#include <stdio.h>

int main(void) {
  int dia, hora, min, seg, diaf, horaf, minf, segf;

  scanf("Dia %d\n", &dia);
  scanf("%d : %d : %d\n", &hora, &min, &seg);
  scanf("Dia %d\n", &diaf);
  scanf("%d : %d : %d\n", &horaf, &minf, &segf);

  dia = diaf - dia;
  hora = horaf - hora;
  min = minf - min;
  seg = segf - seg;

  if (seg < 0) {
    seg = seg + 60;
    min--;
  }
  if (min < 0) {
    min = min + 60;
    hora--;
  }
  if (hora < 0) {
    hora = hora + 24;
    dia--;
  }

  printf("%d dia(s)\n", dia);
  printf("%d hora(s)\n", hora);
  printf("%d minuto(s)\n", min);
  printf("%d segundo(s)\n", seg);
}
