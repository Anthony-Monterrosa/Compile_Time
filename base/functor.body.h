#pragma once 

#include "functor.h"

namespace Compile_Time {
	template<class output, class...parameters>
	constexpr functor<output, parameters...>::functor(const auto lambda_in): lambda(lambda_in) {}
}