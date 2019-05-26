#pragma once
#include <utility>
namespace itertools
{
	template <class T, class W>
	class _product
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

		_product(T t, W w) : _firstKind(t), _secondKind(w) {}

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
_product<T, E> product(const T &first,const E &second)
{
    return _product<T, E>(first, second);
}
};
