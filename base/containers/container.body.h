#pragma once 

#include "container.h"

namespace Compile_Time {
	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator value_type() const {
		return static_cast<subtype*>(this)->value_type_block();
	}

	template<class subtype, class value_type>
	constexpr value_type container<subtype, value_type>::value_type_block() const {
		return this->value;
	}

	template<class subtype, class value_type>
	void constexpr container<subtype, value_type>::operator =(const value_type new_value) {
		return static_cast<subtype*>(this)->assign_block(new_value);
	}

	template<class subtype, class value_type>
	void constexpr container<subtype, value_type>::assign_block(const value_type new_value) {
		this->value = new_value;
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator u8<convert_type>() const {
		return static_cast<subtype*>(this)->u8_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr u8<convert_type> container<subtype, value_type>::u8_block() const {
		return static_cast<u8<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator u16<convert_type>() const {
		return static_cast<subtype*>(this)->u16_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr u16<convert_type> container<subtype, value_type>::u16_block() const {
		return static_cast<u16<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator u32<convert_type>() const {
		return static_cast<subtype*>(this)->u32_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr u32<convert_type> container<subtype, value_type>::u32_block() const {
		return static_cast<u32<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator u64<convert_type>() const {
		return static_cast<subtype*>(this)->u64_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr u64<convert_type> container<subtype, value_type>::u64_block() const {
		return static_cast<u64<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator s8<convert_type>() const {
		return static_cast<subtype*>(this)->s8_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr s8<convert_type> container<subtype, value_type>::s8_block() const {
		return static_cast<s8<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator s16<convert_type>() const {
		return static_cast<subtype*>(this)->s16_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr s16<convert_type> container<subtype, value_type>::s16_block() const {
		return static_cast<s16<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator s32<convert_type>() const {
		return static_cast<subtype*>(this)->s32_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr s32<convert_type> container<subtype, value_type>::s32_block() const {
		return static_cast<s32<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr container<subtype, value_type>::operator s64<convert_type>() const {
		return static_cast<subtype*>(this)->s64_block();
	}

	template<class subtype, class value_type>
	template<class convert_type>
	constexpr s64<convert_type> container<subtype, value_type>::s64_block() const {
		return static_cast<s64<convert_type>>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint8_t() const {
		return static_cast<subtype*>(this)->uint8_t_block();
	}

	template<class subtype, class value_type>
	constexpr uint8_t container<subtype, value_type>::uint8_t_block() const {
		return static_cast<uint8_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint16_t() const {
		return static_cast<subtype*>(this)->uint16_t_block();
	}

	template<class subtype, class value_type>
	constexpr uint16_t container<subtype, value_type>::uint16_t_block() const {
		return static_cast<uint16_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint32_t() const {
		return static_cast<subtype*>(this)->uint32_t_block();
	}

	template<class subtype, class value_type>
	constexpr uint32_t container<subtype, value_type>::uint32_t_block() const {
		return static_cast<uint32_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator uint64_t() const {
		return static_cast<subtype*>(this)->uint64_t_block();
	}

	template<class subtype, class value_type>
	constexpr uint64_t container<subtype, value_type>::uint64_t_block() const {
		return static_cast<uint64_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int8_t() const {
		return static_cast<subtype*>(this)->int8_t_block();
	}		

	template<class subtype, class value_type>
	constexpr int8_t container<subtype, value_type>::int8_t_block() const {
		return static_cast<int8_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int16_t() const {
		return static_cast<subtype*>(this)->int16_t_block();
	}

	template<class subtype, class value_type>
	constexpr int16_t container<subtype, value_type>::int16_t_block() const {
		return static_cast<int16_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int32_t() const {
		return static_cast<subtype*>(this)->int32_t_block();
	}

	template<class subtype, class value_type>
	constexpr int32_t container<subtype, value_type>::int32_t_block() const {
		return static_cast<int32_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator int64_t() const {
		return static_cast<subtype*>(this)->int64_t_block();
	}		

	template<class subtype, class value_type>
	constexpr int64_t container<subtype, value_type>::int64_t_block() const {
		return static_cast<int64_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator char() const {
		return static_cast<subtype*>(this)->char_block();
	}

	template<class subtype, class value_type>
	constexpr char container<subtype, value_type>::char_block() const {
		return static_cast<char>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator wchar_t() const {
		return static_cast<subtype*>(this)->wchar_t_block();
	}

	template<class subtype, class value_type>
	constexpr wchar_t container<subtype, value_type>::wchar_t_block() const {
		return static_cast<wchar_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator char16_t() const {
		return static_cast<subtype*>(this)->char16_t_block();
	}

	template<class subtype, class value_type>
	constexpr char16_t container<subtype, value_type>::char16_t_block() const {
		return static_cast<char16_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator char32_t() const {
		return static_cast<subtype*>(this)->char32_t_block();
	}

	template<class subtype, class value_type>
	constexpr char32_t container<subtype, value_type>::char32_t_block() const {
		return static_cast<char32_t>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator bool() const {
		return static_cast<subtype*>(this)->bool_block();
	}

	template<class subtype, class value_type>
	constexpr bool container<subtype, value_type>::bool_block() const {
		return static_cast<bool>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator float() const {
		return static_cast<subtype*>(this)->float_block();
	}

	template<class subtype, class value_type>
	constexpr float container<subtype, value_type>::float_block() const {
		return static_cast<float>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator double() const {
		return static_cast<subtype*>(this)->double_block();
	}

	template<class subtype, class value_type>
	constexpr double container<subtype, value_type>::double_block() const {
		return static_cast<double>(this->value);
	}

	template<class subtype, class value_type>
	constexpr container<subtype, value_type>::operator decimal() const {
		return static_cast<subtype*>(this)->decimal_block();
	}

	template<class subtype, class value_type>
	constexpr decimal container<subtype, value_type>::decimal_block() const {
		return static_cast<decimal>(this->value);
	}
}