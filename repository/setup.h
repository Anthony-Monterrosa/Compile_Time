#pragma once 

namespace __Compile_Time__::Scope::_Compile_Time_ {}
using namespace __Compile_Time__::Scope;

namespace __Compile_Time__::Scope {

	using max_recurse = assign_type<uint8_t>;
}

#define Compile_Time __Compile_Time__::Scope::_Compile_Time_