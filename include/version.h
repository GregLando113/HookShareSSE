#ifndef	HOOKSHARESSE_VERSION_INCLUDED
#define HOOKSHARESSE_VERSION_INCLUDED

#define HOOKSHARESSE_MAKE_STR_HELPER(x) #x
#define HOOKSHARESSE_MAKE_STR(x) HOOKSHARESSE_MAKE_STR_HELPER(x)

#define HOOKSHARESSE_VERSION_MAJOR		3
#define HOOKSHARESSE_VERSION_MINOR		0
#define HOOKSHARESSE_VERSION_PATCH		0
#define HOOKSHARESSE_VERSION_BETA		0
#define HOOKSHARESSE_VERSION_VERSTRING	HOOKSHARESSE_MAKE_STR(HOOKSHARESSE_VERSION_MAJOR) "." HOOKSHARESSE_MAKE_STR(HOOKSHARESSE_VERSION_MINOR) "." HOOKSHARESSE_MAKE_STR(HOOKSHARESSE_VERSION_PATCH) "." HOOKSHARESSE_MAKE_STR(HOOKSHARESSE_VERSION_BETA)

#endif
