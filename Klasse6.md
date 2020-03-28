# Klasse6


### Zero Crossing

![Zerox](Klasse6/png/zerox.png)

zerox~ zählt "zero crossing".

![](Klasse6/png/zerocross.png)


### Noise-Erkennung

![](Klasse6/png/noisiness.png)


### Waveset

![](Klasse6/png/waveset.png)

Trevor Wishart defined a **waveset** as **the signal between two zerocrossings**. For a simple sinusoid, this corresponds to the **waveform** (= wavelength) . But for signals of richer harmonic content, it produces more complex artefacts.

### Waveset Erkennung 

![](Klasse6/png/zerocross1.png)


### Waveset Erkennung mit Additive-Synthese
![](Klasse6/png/zerocross2.png)

### Waveset Erkennung mit Sample
![](Klasse6/png/zerocross3.png)



### Waveset Distortion


Waveset distortion was developed for the CDP while composing [Tongues of Fire](https://www.youtube.com/watch?v=x-Or7VaMlEI). I defined a waveset as the signal between any pair of zero-crossings. With a simple sine-wave the waveset corresponds to the waveform. But even with a harmonic tone with very strong partials, the waveform may cross the zero more than twice in a complete cycle. In this case the wavesets are shorter than the waveform. With complex signals (e.g. speech) containing noise elements, the definition of the waveset produces many varieties of technically arbitrary, but potentially musically interesting, artefacts. A whole suite of procedures was developed to manipulate wavesets. I have used three at prominent moments in compositions.

![](Klasse6/png/waveforms.png)


-- Trevor Wischart

#### Waveset-Erkennung mit gen~

![](Klasse6/png/waveset_gen1.png)

#### Waveset-Intervallerkennung mit gen~

![](Klasse6/png/waveset_gen2.png)


#### Ersatz durch S￿ägezahn

![](Klasse6/png/waveset_gen3.png)

![](Klasse6/png/waveset_gen3_core.png)


#### Mit H￿üllkurve

![](Klasse6/png/waveset_gen4.png)


#### Ersatz durch Sinus

The first of these involves replacing each waveset with a standard-shape waveform (e.g. a **sinewave**). This produces a very pronounced spectral transformation of the source, but one where the zero-crossings of the result are exactly aligned with those of the source. It is thus possible to use a simple mixing procedure (another CDP process, Inbetweening, does this) to produce a sequence of sounds intermediate between the source and the new sound. These two procedures were developed and used to produce the 'Wood' to 'Drum' transformations in [Tongues of Fire](https://www.youtube.com/watch?v=Ude4717dlsQ).

#### Ersatz durch Sinus

![](Klasse6/png/waveset_gen5.png)


#### Weitere Ideen

##### Mit der additiven Synthese
![](Klasse6/png/idee1.png)

##### Mit der FM Synthese
![](Klasse6/png/idee2.png)
![](Klasse6/png/idee2_core.png)

##### Mit der Waveformsynthese
![](Klasse6/png/idee3.png)
![](Klasse6/png/idee3_core.png)



