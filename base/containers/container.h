#pragma once 

#include "types.h"

namespace Compile_Time {

	template<class subtype, class value_type>
	struct container: object<container<subtype, value_type>> {

		value_type value;

		constexpr inline container() = default;

		constexpr inline operator value_type() const;

		void constexpr inline operator =(const value_type new_value);

		template<class convert_type>
		constexpr inline operator u8<convert_type>() const;

		template<class convert_type>
		constexpr inline operator u16<convert_type>() const;

		template<class convert_type>
		constexpr inline operator u32<convert_type>() const;

		template<class convert_type>
		constexpr inline operator u64<convert_type>() const;

		template<class convert_type>
		constexpr inline operator s8<convert_type>() const;

		template<class convert_type>
		constexpr inline operator s16<convert_type>() const;

		template<class convert_type>
		constexpr inline operator s32<convert_type>() const;

		template<class convert_type>
		constexpr inline operator s64<convert_type>() const;

		template<class convert_type>
		constexpr inline operator Bit<convert_type>() const;

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

		using type = value_type;

	protected:
		constexpr inline value_type value_type_block() const;

		void constexpr inline assign_block(const value_type new_value);

		template<class convert_type>
		constexpr inline u8<convert_type> u8_block() const;

		template<class convert_type>
		constexpr inline u16<convert_type> u16_block() const;

		template<class convert_type>
		constexpr inline u32<convert_type> u32_block() const;

		template<class convert_type>
		constexpr inline u64<convert_type> u64_block() const;

		template<class convert_type>
		constexpr inline s8<convert_type> s8_block() const;

		template<class convert_type>
		constexpr inline s16<convert_type> s16_block() const;

		template<class convert_type>
		constexpr inline s32<convert_type> s32_block() const;

		template<class convert_type>
		constexpr inline s64<convert_type> s64_block() const;

		template<class convert_type>
		constexpr inline Bit<convert_type> Bit_block() const;

		constexpr inline uint8_t uint8_t_block() const;

		constexpr inline uint16_t uint16_t_block() const;

		constexpr inline uint32_t uint32_t_block() const;

		constexpr inline uint64_t uint64_t_block() const;

		constexpr inline int8_t int8_t_block() const;

		constexpr inline int16_t int16_t_block() const;

		constexpr inline int32_t int32_t_block() const;

		constexpr inline int64_t int64_t_block() const;

		constexpr inline char char_block() const;

		constexpr inline wchar_t wchar_t_block() const;

		constexpr inline char16_t char16_t_block() const;

		constexpr inline char32_t char32_t_block() const;

		constexpr inline bool bool_block() const;

		constexpr inline float float_block() const;

		constexpr inline double double_block() const;

		constexpr inline decimal decimal_block() const;
	};
}

