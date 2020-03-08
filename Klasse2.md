# Klasse 2

Das erste sinnvolle DSP Programm mit gen~

## powerrand~

![](Klasse7/png/exprand.png)

## Patch

![](Klasse7/png/exprand_gen.png)

### Schritt 1

**phasor:** erzeugt Sägezahn

![](Klasse2/png/step1.png)

### Schritt 2

**delta:** Differenz zwischen dem jetzigen Wert und dem letzten Wert

![](Klasse2/png/step2.png)

### Schritt 3
**<~ 0:** erzeugt 1, wenn das eingegebene Singal kleiner als 0 ist.


![](Klasse2/png/step3.png)

### Schritt 4
**noise:** erzeugt randomisierten Werte zwiscehn -1 und 1
![](Klasse2/png/step4.png)

### Schritt 5

**sah:** sample and hold. Das Argument = die Schwelle.

![](Klasse2/png/step5.png)


### Schritt 6

![](Klasse2/png/step6.png)

### Schritt 7
**history:** 1 Sample Verzögerung.

![](Klasse2/png/step7.png)

### Schritt 8

![](Klasse2/png/step8.png)


### Schritt 9

![](Klasse2/png/step9.png)


### Schritt 10

![](Klasse2/png/step10.png)

### Schritt 11

![](Klasse2/png/step11.png)

### Schritt 12

gen als Datei
![](Klasse2/png/step12.png)

