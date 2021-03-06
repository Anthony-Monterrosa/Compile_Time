#pragma once 

// To replace use of magic parameters in unused role.
using unused_type = uint8_t;
const constexpr unused_type unused_value = 0;

// To assign using-declarations.
template<class type>
using assign_type = type;

// standard char and double types for one word.
using uchar = unsigned char;
using schar =   signed char;

using decimal = long double;