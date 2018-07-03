#pragma once 

#include "container.h"

namespace Compile_Time {

	template<class subtype>
	struct u8: container<u8<subtype>, uint8_t> {};

	template<class subtype>
	struct u16: container<u8<subtype>, uint16_t> {};

	template<class subtype>
	struct u32: container<u8<subtype>, uint32_t> {};

	template<class subtype>
	struct u64: container<u8<subtype>, uint64_t> {};

	template<class subtype>
	struct s8: container<u8<subtype>, int8_t> {};

	template<class subtype>
	struct s16: container<u8<subtype>, int16_t> {};

	template<class subtype>
	struct s32: container<u8<subtype>, int32_t> {};

	template<class subtype>
	struct s64: container<u8<subtype>, int64_t> {};

	template<class subtype>
	struct Bit: container<u8<subtype>, bool> {};
}