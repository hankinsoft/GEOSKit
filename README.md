GEOSKit - Carthage compatible geos for macOS & iOS

Based on: https://github.com/GEOSwift/geos/blob/master/geos.podspec

Notes:

* Modified geos_c.h to change `#include <geos/export.h>` to be `#include "export.h"` to allow the framework to find it.
