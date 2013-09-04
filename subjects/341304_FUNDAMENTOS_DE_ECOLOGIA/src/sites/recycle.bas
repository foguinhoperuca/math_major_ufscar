2 REM IBM
3  REM RECYCLMT (Recycle Limiting Factor)
4  SCREEN 1, 0: COLOR 0, 0
5 CLS
6  LINE (0, 0)-(319, 180), 1, B
10 TN = .5
15 I = 0
17 Q = 5
20 Z = .05
22 P0 = .1
30 K1 = 2
40 K2 = .5
45 F = .05
47 DI = .05
50 Q = (K1 * TN * I) / (K2 + K1 * F * I)
55 N = TN - F * Q
57 P = K1 * I * N
60 I = I + DI
70  PSET (I / Z, 180 - P / P0), 2
80  IF (I / Z) < 319 GOTO 50
81 BEEP: SLEEP: END
82 REM type CONT for more material to recycle
85 Q = 1
90 TN = TN + .5
95 I = 0
100 Q = 1
110 IF TN < 40 GOTO 50

