#pragma once 

#include "types.h"

namespace Compile_Time {

	template<class subtype, class value_type>
	struct container: object<container<subtype, value_type>> {

		value_type value;

		constexpr inline container() = default;

		constexpr inline operator value_type();

		void constexpr inline operator =(const value_type new_value);

		template<class type>
		constexpr inline operator u8<type>();

		template<class type>
		constexpr inline operator u16<type>();

		template<class type>
		constexpr inline operator u32<type>();

		template<class type>
		constexpr inline operator u64<type>();

		template<class type>
		constexpr inline operator s8<type>();

		template<class type>
		constexpr inline operator s16<type>();

		template<class type>
		constexpr inline operator s32<type>();

		template<class type>
		constexpr inline operator s64<type>();

		template<class type>
		constexpr inline operator Bit<type>();

		template<class type>
		constexpr inline operator uint8_t();

		constexpr inline operator uint16_t();

		constexpr inline operator uint32_t();

		constexpr inline operator uint64_t();

		constexpr inline operator int8_t();

		constexpr inline operator int16_t();

		constexpr inline operator int32_t();

		constexpr inline operator int64_t();

		constexpr inline operator char();

		constexpr inline operator wchar_t();

		constexpr inline operator char16_t();

		constexpr inline operator char32_t();

		constexpr inline operator uchar();

		constexpr inline operator bool();

		constexpr inline operator float();

		constexpr inline operator double();

		constexpr inline operator decimal();
	};
}

