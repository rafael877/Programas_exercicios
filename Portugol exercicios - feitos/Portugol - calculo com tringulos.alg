algoritmo "TRIANGULOS"

var
 L1,L2,L3:REAL
 EQ,ES, tri : LOGICO
inicio
  ESCREVA("DIGITE O PRIMEIRO LADO : ")
  LEIA (L1)
  ESCREVA ("DIGITE O SEGUNDO LADO : ")
  LEIA (L2)
  ESCREVA  ("DIGITE O TERCEIRO LADO :")
  LEIA (L3)
  EQ<- (L1 = L2) e (l2 = l3 )
  es<- (l1 <> l2) e (l2 <> l3) e (l1 <> l3)
  tri<- (l1 < l2 + l3) e (l2 < l1 + l3 ) e ( L3 < L1 + L2)
  escreval ("o triangulo é equilatero ?" , eq )
  escreval ("o triangulo é escaleno? ", es )
  ESCREVAL  ("PODE FORMAR UM TRIANGULO ?" , TRI )
  ESCREVA  ("                                                     VALEU ")

fimalgoritmo
