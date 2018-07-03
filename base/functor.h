#pragma once 

namespace Compile_Time {

	template<class output, class...parameters>
	struct functor: object<functor<output, parameters...>> {

		 output (*lambda)(parameters...);

		constexpr inline functor(const auto lambda);
	};
}