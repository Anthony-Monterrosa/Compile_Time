#pragma once 

// Standard Library
#include <typeinfo>
#include <iostream>

// Personal includes for code style
#include "standard_include/include.h"

// Setups in order
#include "setup.h"

// Headers
#include "../variadics/headers.h"
#include "../base/headers.h"

// Rest
#include "../variadics/includes.h"
#include "../base/includes.h"

/* PLAN:
	make object heigharchy:
	object
		container (mixin-from-above)
			u8, u16, u32, u64, s8, s16, s32, s64, Bit. Also, conversions between all of them.
			property
				inherits from a container, overrides type(), =, and ->.
		linear_sort (mixin-from-below)
			define linear sort that inherits a functor which describes the conditional.
	variadics
		type
		objects
	concepts
		check type
	typeid own defintion
*/
