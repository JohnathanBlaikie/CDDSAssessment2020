#include <array>
#pragma once
using std::array;
using std::string;
using std::cout;
using std::cin;
using std::endl;



template<typename T>
size_t hash(const T& val)
{

}


template<>
size_t hash<int>(const int & val)
{
	return val * (21031 * 2) % std::numeric_limits<size_t>::max();

}
template<>
size_t hash<char>(const char & val)
{
	return (int)val * (21031 * 2) % std::numeric_limits<size_t>::max();
}

template<>
size_t hash<string>(const string & val)
{
	size_t t = 0;
	for (size_t i = 0; i < val.length(); i++)
	{
		if (i % 4 == 0)
		{
			t += (int)val[i];
		}
		else if (i % 6 == 0)
		{
			t *= ((int)val[i] * 5);
		}
		else {
			t *= ((int)val[i]);
		}
	}

	return t;
}

template<typename K, typename V>
class hMap {
	V*data;
	size_t dCap;
	string tString;
	long tLong;
public:
	hMap() {
		dCap = 100;
		data = new V[dCap];
	}
	
	hMap & operator=(const hMap & r)
	{
		dCap = r.dCap;

		for (size_t i = 0; i < dCap; i++)
		{
			data[i] = r.data[i];
		}
		return *this;
	}

	~hMap() {
		delete[] data;
	}


	V& operator[] (const K& key) {
		int temp = hash(key) % dCap;
		return data[temp];
	}
};

