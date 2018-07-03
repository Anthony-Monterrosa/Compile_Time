#pragma once 

uint8_t constexpr inline operator ""_u8(const unsigned long long int literal) {
	return static_cast<uint8_t>(literal);
}

uint16_t constexpr inline operator ""_u16(const unsigned long long int literal) {
	return static_cast<uint16_t>(literal);
}

uint32_t constexpr inline operator ""_u32(const unsigned long long int literal) {
	return static_cast<uint32_t>(literal);
}

uint64_t constexpr inline operator ""_u64(const unsigned long long int literal) {
	return static_cast<uint64_t>(literal);
}