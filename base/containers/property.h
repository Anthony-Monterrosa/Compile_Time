#pragma once 

#include "../functor.h"

namespace Compile_Time {

	template<auto item>
	struct property {

		const functor<_type_(item), _type_(item)> getter;
		const functor<void, _type_(&item), _type_(item)> setter;

		constexpr inline property(const auto getter_in, const auto setter_in);


	};
}