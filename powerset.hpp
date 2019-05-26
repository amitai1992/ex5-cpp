#pragma once
#include <set> 
#include <vector>
#include <cmath>
#include <iostream>
#include "zip.hpp"
namespace itertools
{
	template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &S){
    return os;
}
	template <class T>
	class _powerset
	{

		template <class E>
		class iterator // inside class iterator.
		{
		public:
			E _current;

			iterator(E it) : _current(it) {}

			//T &operator*()
			//{
			//	return _current;
			//}

			//// ++i;
			//iterator &operator++()
			//{
			//	_current++;
			//	return *this;
			//}

			//bool operator!=(const iterator &it) const
			//{
			//	return _current != it._current;
			//}

		};
	public:

		T _start;

		_powerset(T start) : _start(start) {}

		auto begin()
			const {
			return this->_start.begin();
		}

		auto end()
			const {
			return this->_start.begin();
		}
	};
template <typename T>
_powerset<T> powerset(const T start){
    return _powerset<T>(start);
}
};
