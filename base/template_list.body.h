#pragma once 

#include "template_list.h"

namespace Compile_Time {

	template<auto first, auto...rest>
	template<max_recurse index>
	constexpr auto template_list<first, rest...>::at() const {
		return from_index<index, first, rest...>();
	}

	template<auto first, auto...rest>
	template<auto addition>
	constexpr auto template_list<first, rest...>::add() const {
		return template_list<addition, first, rest...>();
	}

	template<auto first, auto...rest>
	constexpr auto template_list<first, rest...>::remove() const {
		return template_list<rest...>();
	}
}