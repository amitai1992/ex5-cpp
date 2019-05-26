#pragma once
#include <utility> 
#include <iostream>
namespace itertools
{

template <typename T,typename W>
std::ostream &operator<<(std::ostream &os, const std::pair<T,W>&pair){
    os<< pair.first <<','<< pair.second;
    return os;
}
	template <class T, class W>
	class _zip
	{
	private:
		T _firstKind;
		W _secondKind;

		template <typename U, typename V>
		class iterator
		{
		public:
			U itrU;
			V itrV;
			bool flag;
			iterator(U u, V v) : itrU(u), itrV(v), flag(true) {}
		};
	public:

		_zip(T t, W w) : _firstKind(t), _secondKind(w) {}

		auto begin()
			const {
			return _firstKind.begin();
		}

		auto end()
			const {
			return _firstKind.end();
		}

	};
template <typename T, typename E>
_zip<T, E> zip(const T &first,const E &second){
    return _zip<T, E>(first, second);
}
};
