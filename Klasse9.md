# Klasse10

### Reverbration

![](Klasse9/png/reverb.png)

### Manfred Schröeders "FreeVerb"

![](Klasse9/png/mrs.jpg) 
Urheber von Digital Reverb

![](Klasse9/png/freeverb.png)

### Kammfilter in gen

![](Klasse9/png/comb.png)
![](Klasse9/png/comb_gen.png)

### Kammfilter mit Tiefpass


![](Klasse9/png/comb2.png)
![](Klasse9/png/comb2_gen.png)

### Array von 8x Kammfilter

![](Klasse9/png/comb3.png)

![](Klasse9/png/comb3_gen.png)

![](Klasse9/png/comb3_gendsp.png)

Warum sind Delay Time 1157, 1617, 1491 ... etc ?
Sie sind alle teilerfremd deshalb sind Delays immer unsynchronisiert (nicht gleichzeitig gespielt).



### Allpass

An allpass filter is a peculiar signal processor. For steady-state tones fed into it, the allpass filter passes all frequencies equally well with no change in ampplitude -- hence its name.

Thus, it is said that an allpass filter has a flat frequency response throughout the audio bandwidth. However, the allpass also imposes a frequency-dependent phase shift on the incoming signal. it delays various frequency regions by different amounts.

![](Klasse9/png/allpass.jpg)

### Der Unterschied Kamm vs Allpass

#### Comb
![](Klasse9/png/compare_comb.png)
![](Klasse9/png/comb_spectrum.png)

#### Allpass
![](Klasse9/png/compare_allpass.png)
![](Klasse9/png/allpass_spectrum.png)

Phasenausl￿￿ösung mit * -feedback

#### Array von Allpass

![](Klasse9/png/allpass2.png)
![](Klasse9/png/allpass2_gen.png)
![](Klasse9/png/allpass2_gendsp.png)

#### Kombination

![](Klasse9/png/freeverb_main.png)
![](Klasse9/png/freeverb_gen.png)

#### "Room Size" parameter

![](Klasse9/png/freeverb_rm.png)
![](Klasse9/png/freeverb_rm_gen.png)

