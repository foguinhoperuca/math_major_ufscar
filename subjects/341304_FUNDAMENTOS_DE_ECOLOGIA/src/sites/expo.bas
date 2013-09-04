10 REM IBM: EXPO  (model of exponential growth)
20 CLS
30  SCREEN 1, 0:  COLOR 0, 0
35 LINE (O, 0)-(319, 180), 0, BF
40  LINE (0, 0)-(319, 180), 1, B
50 Q = 20
60 E = 1
70 K1 = .04
80 K4 = .03
90   PSET (T, 180 - Q), 2
100 DQ = K1 * Q * E - K4 * Q
105 Q = Q + DQ
110 T = T + 1
120  IF Q > 180 GOTO 135
130  IF T < 319 GOTO 90
135 LOCATE 2, 2: PRINT "Expo.bas"
140 SLEEP: REM ESPERA: END

