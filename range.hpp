
namespace itertools
{

	template <class T>
	class _range 
	{
	private:
	const	T _start; // generic start, end
	const	T _end;

		
		class iterator // inside class iterator.
		{
		public:
			T _current;

			iterator(T it) : _current(it) {}

			T operator*()const
			{
				return _current;
			}

			// ++i;
			_range::iterator &operator++()
			{
				++this->_current;
				return *this;
			}

			bool operator!=( _range::iterator const it) const
			{
				return (_current != (it._current));
			}

		};
	public:
		_range(const T start,const T end) : _start(start), _end(end) {}

	_range::iterator begin()const { return _range::iterator(_start); }//return _begin
		_range::iterator end()const { return _range::iterator(_end); }//return _end

	};

template <typename T>
	_range<T> range(const T begin,const T end) {
		return _range<T>(begin, end);
	}
};
