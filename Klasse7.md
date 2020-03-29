# Klasse7


### Zero Crossing

![Zerox](Klasse7/png/zerox.png)

zerox~ zählt "zero crossing".

![](Klasse7/png/zerocross.png)


### Noise-Erkennung

![](Klasse7/png/noisiness.png)


### Waveset

![](Klasse7/png/waveset.png)

Trevor Wishart defined a **waveset** as **the signal between two zerocrossings**. For a simple sinusoid, this corresponds to the **waveform** (= wavelength) . But for signals of richer harmonic content, it produces more complex artefacts.

### Waveset Erkennung 

![](Klasse7/png/zerocross1.png)


### Waveset Erkennung mit Additive-Synthese
![](Klasse7/png/zerocross2.png)

### Waveset Erkennung mit Sample
![](Klasse7/png/zerocross3.png)



### Waveset Distortion


Waveset distortion was developed for the CDP while composing [Tongues of Fire](https://www.youtube.com/watch?v=x-Or7VaMlEI). I defined a waveset as the signal between any pair of zero-crossings. With a simple sine-wave the waveset corresponds to the waveform. But even with a harmonic tone with very strong partials, the waveform may cross the zero more than twice in a complete cycle. In this case the wavesets are shorter than the waveform. With complex signals (e.g. speech) containing noise elements, the definition of the waveset produces many varieties of technically arbitrary, but potentially musically interesting, artefacts. A whole suite of procedures was developed to manipulate wavesets. I have used three at prominent moments in compositions.

![](Klasse7/png/waveforms.png)


-- Trevor Wischart

#### 1. Waveset-Erkennung mit gen~

![](Klasse7/png/ws1.png)

![](Klasse7/png/ws1_gen.png)

#### 2. Waveset-Intervallerkennung mit gen~

![](Klasse7/png/ws2.png)

![](Klasse7/png/ws2_gen.png)

#### 3. mit Beschr￿änkung

![](Klasse7/png/ws3.png)

![](Klasse7/png/ws3_gen.png)

#### 4. Aufnahme

![](Klasse7/png/ws4.png)

![](Klasse7/png/ws4_gen.png)

#### 5. Wiedergabe

![](Klasse7/png/ws5.png)

![](Klasse7/png/ws5_gen.png)


#### 6. Ersatz durch Sinus


The first of these involves replacing each waveset with a standard-shape waveform (e.g. a **sinewave**). This produces a very pronounced spectral transformation of the source, but one where the zero-crossings of the result are exactly aligned with those of the source. It is thus possible to use a simple mixing procedure (another CDP process, Inbetweening, does this) to produce a sequence of sounds intermediate between the source and the new sound. These two procedures were developed and used to produce the 'Wood' to 'Drum' transformations in [Tongues of Fire](https://www.youtube.com/watch?v=Ude4717dlsQ).

![](Klasse7/png/ws6.png)

![](Klasse7/png/ws6_gen.png)

#### 7. Envelop Follower

![](Klasse7/png/ws7.png)

![](Klasse7/png/ws7_gen.png)

#### 8. Weitere Ideen

##### Pulser Synthese in WaveSet

![](Klasse7/png/pulser.png)
![](Klasse7/png/pulser_gen.png)

##### Additive Synthese in WaveSet

![](Klasse7/png/additive.png)
![](Klasse7/png/additive_gen.png)