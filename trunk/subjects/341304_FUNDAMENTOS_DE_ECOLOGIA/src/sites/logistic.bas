10 REM IBM: LOGISTIC  (model of logistic growth)
20 CLS
30 SCREEN 1, 0: COLOR 15, 0
35 LINE (0, 0)-(319, 180), 3, B
40 E = 1.7
50 Q = 4
60 K1 = .04
70 K4 = .0008
90 PSET (T, 180 - Q), 1
100 DQ = K1 * E * Q - K4 * Q * Q
105 Q = Q + DQ
110 T = T + 1
120  IF T < 319 GOTO 90
125 LOCATE 2, 2: PRINT "Logistic.bas"
130 SLEEP: SLEEP
140 END

