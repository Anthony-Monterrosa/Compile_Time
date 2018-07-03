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

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator u8<type>() const {
		return static_cast<u8<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator u16<type>() const {
		return static_cast<u16<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator u32<type>() const {
		return static_cast<u32<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator u64<type>() const {
		return static_cast<u64<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator s8<type>() const {
		return static_cast<s8<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator s16<type>() const {
		return static_cast<s16<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator s32<type>() const {
		return static_cast<s32<type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class type>
	constexpr container<subtype, value_type>::operator s64<type>() const {
		return static_cast<s64<type>>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint8_t() const {
		return static_cast<uint8_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint16_t() const {
		return static_cast<uint16_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint32_t() const {
		return static_cast<uint32_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint64_t() const {
		return static_cast<uint64_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int8_t() const {
		return static_cast<int8_t>(this->value);
	}		

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int16_t() const {
		return static_cast<int16_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int32_t() const {
		return static_cast<int32_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int64_t() const {
		return static_cast<int64_t>(this->value);
	}		

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator char() const {
		return static_cast<char>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator wchar_t() const {
		return static_cast<wchar_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator char16_t() const {
		return static_cast<char16_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator char32_t() const {
		return static_cast<char32_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator bool() const {
		return static_cast<bool>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator float() const {
		return static_cast<float>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator double() const {
		return static_cast<double>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator decimal() const {
		return static_cast<decimal>(this->value);
	}
}