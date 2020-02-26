# Das erste DSP Objekt

## Plus One Objekt

![](Klasse2/plusone.png)

### plusone_tilde Projekt

![](Klasse2/directory.png)

#### CMakeLists.txt
``` CMakeLists.txt
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

#### plusone_tilde.cpp
``` plusone_tilde.cpp
#include "c74_msp.h"

using namespace c74::max;

static t_class* this_class = nullptr;

struct t_plusone {
	t_pxobject obj;
};

void* plusone_new(void) {
	t_plusone* self = (t_plusone*)object_alloc(this_class);
	dsp_setup((t_pxobject*)self, 1);
	outlet_new(self, "signal");
	return self;
}

void plusone_free(t_plusone* self) {
	dsp_free((t_pxobject*)self);
}

void plusone_perform64(t_plusone* self, t_object* dsp64, double** ins, long numins, double** outs, long numouts, long sampleframes, long flags, void* userparam) {
    
	for (auto i=0; i<sampleframes; ++i)
        outs[0][i] = ins[0][i] + 1.0f;
}

void plusone_dsp64(t_plusone* self, t_object* dsp64, short* count, double samplerate, long maxvectorsize, long flags) {
	object_method_direct(void, (t_object*, t_object*, t_perfroutine64, long, void*),
						 dsp64, gensym("dsp_add64"), (t_object*)self, (t_perfroutine64)plusone_perform64, 0, NULL);
}

void ext_main(void* r) {
	this_class = class_new("plusone~", (method)plusone_new, (method)plusone_free, sizeof(t_plusone), 0, A_GIMME, 0);
	class_addmethod(this_class, (method)plusone_dsp64, "dsp64", A_CANT,	0);
	class_dspinit(this_class);
	class_register(CLASS_BOX, this_class);
}
```

#### t_class

The data structure for a Max class.
```
static t_class* this_class = nullptr;
```
static ... this_class ist g￿ültig nur in dieser Datei.
