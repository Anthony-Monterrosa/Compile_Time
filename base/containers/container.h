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
		constexpr inline operator u8<type>() const;

		template<class type>
		constexpr inline operator u16<type>() const;

		template<class type>
		constexpr inline operator u32<type>() const;

		template<class type>
		constexpr inline operator u64<type>() const;

		template<class type>
		constexpr inline operator s8<type>() const;

		template<class type>
		constexpr inline operator s16<type>() const;

		template<class type>
		constexpr inline operator s32<type>() const;

		template<class type>
		constexpr inline operator s64<type>() const;

		template<class type>
		constexpr inline operator Bit<type>() const;

		constexpr inline operator uint8_t() const;

		constexpr inline operator uint16_t() const;

		constexpr inline operator uint32_t() const;

		constexpr inline operator uint64_t() const;

		constexpr inline operator int8_t() const;

		constexpr inline operator int16_t() const;

		constexpr inline operator int32_t() const;

		constexpr inline operator int64_t() const;

		constexpr inline operator char() const;

		constexpr inline operator wchar_t() const;

		constexpr inline operator char16_t() const;

		constexpr inline operator char32_t() const;

		constexpr inline operator bool() const;

		constexpr inline operator float() const;

		constexpr inline operator double() const;

		constexpr inline operator decimal() const;
	};
}

