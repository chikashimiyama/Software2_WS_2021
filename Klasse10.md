# Klasse10


## Modeltest #1

Programmieren Sie ein Patch, das Klangdatei "voice.wav" mit der Granularsynthese fünf mal länger als das Original ohne Tonhöheänderung abspielt. Sie müssen mit dem Sample-And-Hold und der OLA-Technik Klick-Noise vermeiden. (20 min.)

[voice.wav](Klasse10/voice.wav)

### Zero Crossing

![Zerox](Klasse10/png/zerox.png)

zerox~ zählt "zero crossing".

![](Klasse10/png/zerocross.png)


### Noise-Erkennung

![](Klasse10/png/noisiness.png)


### Waveset

![](Klasse10/png/waveset.png)

Trevor Wishart defined a **waveset** as **the signal between two zerocrossings**. For a simple sinusoid, this corresponds to the **waveform** (= wavelength) . But for signals of richer harmonic content, it produces more complex artefacts.

### Waveset Erkennung 

![](Klasse10/png/zerocross1.png)


### Waveset Erkennung mit Additive-Synthese
![](Klasse10/png/zerocross2.png)

### Waveset Erkennung mit Sample
![](Klasse10/png/zerocross3.png)



### Waveset Distortion


Waveset distortion was developed for the CDP while composing [Tongues of Fire](https://www.youtube.com/watch?v=x-Or7VaMlEI). I defined a waveset as the signal between any pair of zero-crossings. With a simple sine-wave the waveset corresponds to the waveform. But even with a harmonic tone with very strong partials, the waveform may cross the zero more than twice in a complete cycle. In this case the wavesets are shorter than the waveform. With complex signals (e.g. speech) containing noise elements, the definition of the waveset produces many varieties of technically arbitrary, but potentially musically interesting, artefacts. A whole suite of procedures was developed to manipulate wavesets. I have used three at prominent moments in compositions.

![](Klasse10/png/waveforms.png)


-- Trevor Wischart

#### Waveset-Erkennung mit gen~

![](Klasse10/png/waveset_gen1.png)

#### Waveset-Intervallerkennung mit gen~

![](Klasse10/png/waveset_gen2.png)

#### Waveset-Phasor-Umwandlung 
![](Klasse10/png/waveset_gen3.png)
![](Klasse10/png/waveset_gen3_core.png)
 

#### Ersatz durch Sinus

The first of these involves replacing each waveset with a standard-shape waveform (e.g. a **sinewave**). This produces a very pronounced spectral transformation of the source, but one where the zero-crossings of the result are exactly aligned with those of the source. It is thus possible to use a simple mixing procedure (another CDP process, Inbetweening, does this) to produce a sequence of sounds intermediate between the source and the new sound. These two procedures were developed and used to produce the 'Wood' to 'Drum' transformations in [Tongues of Fire](https://www.youtube.com/watch?v=x-Or7VaMlEI).

![](Klasse10/png/waveset_gen35.png)


#### Ersatz durch Sinus + Envelope Follower

![](Klasse10/png/waveset_gen5.png)


