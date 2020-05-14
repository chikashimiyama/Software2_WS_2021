# Klasse6


## Filter mit gen~

## FIR Filter / IIR Filter?

IR ... Impulse Response  
FIR ... Finate Impulse Response    
IIR ... Infinate Impulse Response   

## Impulse Response

### Impulse

![](Klasse6/png/ir.jpg)

### Impulse Response DataBase

[OpenAir](https://openairlib.net/)

Aufgenommene IRData (Tennis Court)
![](Klasse6/png/real.png)

Convolution Reverb mit IRData
![](Klasse6/png/spacedesigner.jpg)

### Experiment mit onepole~

![](Klasse6/png/reverse_e.png)
## FIR Filter
### Simple Low-pass

y[n] = (0.5 * x[n]) + (0.5 * x[n-1])

![](Klasse6/png/lowpass.png)
![](Klasse6/png/lowpass_gen.png)

### Simple High-pass

y[n] = (0.5 * x[n]) - (0.5 * x[n-1])

![](Klasse6/png/highpass.png)
![](Klasse6/png/highpass_gen.png)

### Variable Coef

y[n] = (a0 * x[n]) + (a1 * x[n-1])


![](Klasse6/png/variable.png)
![](Klasse6/png/variable_gen.png)

### FIR Filter cascading

y[n] = (a0 * x[n]) ± (a1 * x[n-1]) ± (a2 * x[n-2]) .... ± (ai * [x[n-i]])

![](Klasse6/png/2nd.png)

![](Klasse6/png/2nd_gen.png)

![](Klasse6/png/3rd.png)

![](Klasse6/png/3rd_gen.png)

## IIR Filter

### Recursive Low Pass

y[n] = (0.5 * x[n]) + (0.5 * y[n-1])

![](Klasse6/png/eta.png)
![](Klasse6/png/eta_gen.png)

y[n] = (a * x[n]) - (b *[n-1])

![](Klasse6/png/rlp.png)
![](Klasse6/png/rlp_gen.png)

```
increasing b raises the highpass cutoff frequency, attenuating more and more low frequency
```

### Recuesive High Pass

![](Klasse6/png/rhp.png)
![](Klasse6/png/rhp_gen.png)

### Umsetzung von biquad~ mit gen~

Biquad = zwei FIR + zwei IIR

y[n] = a0 * x[n] + a1 * x[n-1] + a2* x[n-2] -b1 * y[n-1] -b2 * y[n-2]


![](Klasse6/png/biquad.png)
![](Klasse6/png/biquad_gen.png)
