algoritmo "conversor"

var
  Angulo, s: real
inicio
  escreva ("informe um angulo : ")
  leia (angulo)
  s <- sen(grauprad(angulo))
  escreva ("o seno de " ,angulo, " é iqual a ",s)
fimalgoritmo
