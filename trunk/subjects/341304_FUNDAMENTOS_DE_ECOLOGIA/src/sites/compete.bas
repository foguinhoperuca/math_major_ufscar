1 CLS
2 REM IBM PC
3 REM COMPETE
4 REM Two Populations, unlimited source
5 SCREEN 1, 0: COLOR 15, 0
6 LINE (0, 0)-(319, 180), 3, B
10 I = 8
20 Q = 3
30 Q2 = 3
40 K1 = .07
50 K2 = .08
60 K3 = .05
70 K4 = .05
80 K5 = .018
95 R = 1
100 PSET (T, 180 - Q), 1
120 PSET (T, 180 - Q2), 2
150 D1 = K1 * R * Q - K3 * Q
160 D2 = K2 * R * Q2 - K4 * Q2
162 Q = Q + D1
163 IF Q > 180 THEN Q = 180
165 Q2 = Q2 + D2
167 IF Q2 > 180 THEN Q2 = 180
170 T = T + 1
180  IF T < 319 GOTO 100
185 LOCATE 2, 2: PRINT "Compete.bas"
190 SLEEP: SLEEP
200 END

