namespace itertools
{
template <class T, class W>
	class _chain{
private:
	const T &_firstKind;
	const	W &_secondKind;


		template <class U, class V>
		class iterator
		{
		public:
			U itrU;
			V itrV;
	
			iterator(U it1, V it2) : itrU(it1), itrV(it2) {}

	
		};

	public:
	

		_chain(const T &t,const W &w) : _firstKind(t), _secondKind(w) {}

		auto begin()
			const {
			return _secondKind.begin();

		}

		auto end()
			const {
			return _secondKind.end();

		}

	};
template <typename T, typename E>

_chain<T, E> chain(const T &first,const E &second){
    return _chain<T, E>(first, second);
}
};
