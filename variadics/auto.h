#pragma once 

namespace Compile_Time {
	template<max_recurse index, auto first, auto...rest>
	constexpr inline auto from_index();

	template<auto...items>
	constexpr inline auto first();

	template<auto...items>
	constexpr inline auto last();
}