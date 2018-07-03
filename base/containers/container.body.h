#pragma once 

#include "container.h"

namespace Compile_Time {
	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator value_type() {
		return this->value;
	}

	template<class subtype, class value_type>
	void constexpr container<subtype, value_type>::operator =(const value_type new_value) {
		this->value = new_value;
	}
}