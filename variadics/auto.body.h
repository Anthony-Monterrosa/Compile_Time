#pragma once

#include "auto.h"

namespace Compile_Time {
	template<max_recurse index, auto first, auto...rest>
	constexpr auto from_index() {
		if constexpr(index == 0) return first;
	}
	
	template<auto...items>
	constexpr auto first() {
		return from_index<0, items...>();
	}

	template<auto...items>
	constexpr auto last() {
		return from_index<sizeof...(items) - 1, items...>();
	}
}