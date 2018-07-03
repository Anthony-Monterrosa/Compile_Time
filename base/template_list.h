#pragma once

namespace Compile_Time {
	template<auto first, auto...rest>
	struct template_list: object<template_list<first, rest...>> {

		constexpr inline template_list();

		template<max_recurse index>
		constexpr inline auto at() const;

		template<auto addition>
		constexpr inline auto add() const;

		constexpr inline auto remove() const;
	};
}