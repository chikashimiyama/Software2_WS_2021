# Max API

## relevante Webseiten

- [MaxDevKit](https://github.com/Cycling74/max-devkit.git)
- [MaxAPI](https://cycling74.com/sdk/max-sdk-7.3.3/html/chapter_msp_anatomy.html)
- [Github](https://github.com/Cycling74/max-api)
- [Cmake](https://cmake.org/download/)

## Installation

1. Xcode installieren
2. Cmake Installieren

## Cmake build

### Building
- Get the code from Github, or download a zip and unpack it into a folder.
- In the Terminal or Console app of your choice, change directories (cd) into the folder you created in step 0.
- mkdir build to create a folder with your various build files
- cd build to put yourself into that folder
- Now you can generate the projects for your choosen build environment:

### Mac
You can build on the command line using Makefiles, or you can generate an Xcode project and use the GUI to build.

Xcode: Run cmake -G Xcode .. and then run cmake --build . or open the Xcode project from this "build" folder and use the GUI.

### Sample Projects

> source/projects/sin_tilde

#### CmakeLists.txt
```
cmake_minimum_required(VERSION 3.0)


include(${CMAKE_CURRENT_SOURCE_DIR}/../../max-api/script/max-pretarget.cmake)


include_directories( 
	"${C74_INCLUDES}"
)


add_library( 
	${PROJECT_NAME} 
	MODULE
	${PROJECT_NAME}.cpp
)


include(${CMAKE_CURRENT_SOURCE_DIR}/../../max-api/script/max-posttarget.cmake)
```

#### sin_tilde.cpp
```
#include "c74_msp.h"

using namespace c74::max;

static t_class* this_class = nullptr;


struct t_sin {
	t_pxobject	obj;
};


void* sin_new(void) {
	t_sin* self = (t_sin*)object_alloc(this_class);
	
	dsp_setup((t_pxobject*)self, 1);
	outlet_new(self, "signal");
	return self;
}


void sin_free(t_sin* self) {
	dsp_free((t_pxobject*)self);
}


void sin_perform64(t_sin* self, t_object* dsp64, double** ins, long numins, double** outs, long numouts, long sampleframes, long flags, void* userparam) {
	for (auto i=0; i<sampleframes; ++i)
		outs[0][i] = std::sin(ins[0][i] * 2.0 * M_PI);
}


void sin_dsp64(t_sin* self, t_object* dsp64, short* count, double samplerate, long maxvectorsize, long flags) {
	object_method_direct(void, (t_object*, t_object*, t_perfroutine64, long, void*),
						 dsp64, gensym("dsp_add64"), (t_object*)self, (t_perfroutine64)sin_perform64, 0, NULL);
}


void sin_assist(t_sin* self, void* unused, t_assist_function io, long index, char* string_dest) {
	if (io == ASSIST_INLET) {
		switch (index) {
			case 0: 
				strncpy(string_dest,"(signal) Phase (0-1)", ASSIST_STRING_MAXSIZE); 
				break;
		}
	}
	else if (io == ASSIST_OUTLET) {
		switch (index) {
			case 0: 
				strncpy(string_dest,"(signal) Sine Output", ASSIST_STRING_MAXSIZE); 
				break;
		}
	}
}


void ext_main(void* r) {
	this_class = class_new("sin~", (method)sin_new, (method)sin_free, sizeof(t_sin), 0, A_GIMME, 0);

	class_addmethod(this_class, (method)sin_assist,	"assist",	A_CANT,		0);
	class_addmethod(this_class, (method)sin_dsp64,	"dsp64",	A_CANT,		0);
	
	class_dspinit(this_class);
	class_register(CLASS_BOX, this_class);
}
```
#### Grundidee von MaxAPI

- Wie kann man das Verhalten des Objekt definieren?
- Max stellt ein Paar Fragen, du definierst das Verhalten durch der Antworten zur Frage.

z.B. wenn eine Instanz eines Objektes von einem Benutzer hinzugefügt, was soll ich tun?
Wenn der Benutzer die DSP anmacht, wie soll ich SignalVector behandeln?

- Was ist ein Verhalten in C?
- Funktion. Du kannst Max mit einem Funktionspointer die Position deiner Antwort in der Arbeitspeicher zeigen. 

#### Analyze von sin_tilde.cpp 

```
#include "c74_msp.h"
```
Lade die header file von max/msp, um Max API zu benutzen.

```
using namespace c74::max;
```
Ohne diese Zeile muss man immer c74::max::*Funktion* schreiben

```
static t_class* this_class = nullptr;
```
Pointer, der dieses Objekt zeigt. Das Objekt wird sp￿äter dynamisch zugewiesen.

```
struct t_sin {
	t_pxobject	obj;
};
```
Eine Deklaration von struct mit einem Mitglied, obj.

```
void* sin_new(void){} 
```
Diese Funktion wird aufgerufen, wenn eine neue Instanz von Klasse sin~ ins Max patch hinzugefügt wird.

```
void sin_free(t_sin* self) {}
```
Diese Funktion wird aufgerufen, wenn eine Instanz von Klasse sin~ in Max Patch gel￿öscht wird.

```
void sin_perform64(t_sin* self, t_object* dsp64, double** ins, long numins, double** outs, long numouts, long sampleframes, long flags, void* userparam) {}
```
Die Kernfunktion, wo du deinen eigenen DSP-Algorithums schreibst.

```
void sin_dsp64(t_sin* self, t_object* dsp64, short* count, double samplerate, long maxvectorsize, long flags)
```
Diese Funktion wird aufgerufen, wenn DSP in Max Patch angemacht wird.

```
void sin_assist(t_sin* self, void* unused, t_assist_function io, long index, char* string_dest) {}
```
Man kann hier "helper message" definieren

```
void ext_main(void* r) {}
```
Der Einstiegspunkt des Objektes.



