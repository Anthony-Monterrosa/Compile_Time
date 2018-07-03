#pragma once 

#include "../base/object.h"

namespace Compile_Time {

	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
	template<max_recurse index, class first, class...rest>
	struct from_index_type: object<from_index_type<index, first, rest...>> {

		static constexpr inline auto create() {
			if constexpr(index == 0) {
				struct internal { 
					constexpr inline internal() = default;
					using type = first;
				}; return internal();}
			else {
				struct internal {
					constexpr inline internal() = default;
					using type = typename from_index_type<index - 1, rest...>::type;
				}; return internal();}
		}

		using type = typename _type_(create())::type;
	};
	#pragma GCC diagnostic pop
}
