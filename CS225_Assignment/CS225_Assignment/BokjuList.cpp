#include "BokjuList.h"

using namespace BokjuLibrary;

template <typename T>
Bokju_list<T>::Bokju_list()
{
	size_ = 0;
	data_ = nullptr;

	a = nullptr;
}

template <typename T>
Bokju_list<T>::Bokju_list(int count) //list lt(10);
{
	size_ = count;
	data_ = new int[size_];
	for (int i = 0; i < size_; i++)
	{
		data_[i] = 0;
	}
}

template <typename T>
Bokju_list<T>::Bokju_list(int count, const T& x) //list lt(3, 2);
{
	size_ = count;
	data_ = new int[size_];
	for (int i = 0; i < size_; i++)
	{
		data_[i] = x;
	}
}

template <typename T>
Bokju_list<T>::~Bokju_list() {
	if (size_ > 0 || data_ != nullptr)
	{
		delete[] data_;
	}
};

template <typename T>
Bokju_list<T>::Bokju_list(const Bokju_list& other_Bokju_list)
{
	size_ = other_Bokju_list.size_;
	data_ = new int[other_Bokju_list.size_];

	std::copy(other_Bokju_list.data_, other_Bokju_list.data_ + size_, data_);
}

template <typename T>
Bokju_list<T>::Bokju_list(const Bokju_list&& other_Bokju_list)
{
	size_ = 0;
	delete[]data_;

	size_ = other_Bokju_list.size_;
	data_ = new int[other_Bokju_list.size_];
	data_ = other_Bokju_list.data_;

	other_Bokju_list.size_ = 0;
	other_Bokju_list.data_ = nullptr;
}

template <typename T>
Bokju_list<T>& Bokju_list<T>::operator=(const Bokju_list& other_Bokju_list)
{
	if (this != &other_Bokju_list)
	{
		delete[] data_;

		size_ = other_Bokju_list.size_;
		data_ = new int[size_];
		std::copy(other_Bokju_list.data_, other_Bokju_list.data_ + size_, data_);
	}
}

template <typename T>
Bokju_list<T>& Bokju_list<T>::operator=(const Bokju_list&& other_Bokju_list)
{
	if (this != other_Bokju_list)
	{
		size_ = 0;
		delete[]data_;

		data_ = other_Bokju_list.data_;
		size_ = other_Bokju_list.size_;

		other_Bokju_list.data_ = nullptr;
		other_Bokju_list.size_ = 0;
	}
}


template <typename T>
void constexpr Bokju_list<T>::push_back(const T& x)
{
	if (empty() == true)
	{
		size_ = 1;
		data_ = new T[size_];
		data_[0] = x;
	}
	else if (empty() == false)
	{
		a = new T[size_];
		a = data_;
		size_++;
		data_ = new T[size_];
		for (int i = 0; i < size_ - 1; i++)
		{
			data_[i] = a[i];
		}
		data_[size_ - 1] = x;
		delete[] a;
	}
}

template<typename T>
int Bokju_list<T>::size() const {
	return size_;
}

template<typename T>
void constexpr Bokju_list<T>::push_front(const T& x) {

	if (empty() == true)
	{
		size_ = 1;
		data_ = new T[size_];
		data_[0] = x;
	}
	else if (empty() == false)
	{
		a = new T[size_];
		a = data_;//copy
		size_++;
		data_ = new T[size_];
		data_[0] = x;
		for (int i = 1; i < size_; i++)
		{
			data_[i] = a[i - 1];
		}
		delete[] a;
	}
}

template<typename T>
void Bokju_list<T>::insert(int count, const T& x) const {
	data_[count - 1] = x;
}

template<typename T>
void Bokju_list<T>::remove(const T& x) {

	a = new T[size_];
	a = data_;

	for (int i = 0; i < size_; i++)
	{
		if (data_[i] == x)
		{
			size_--;
			data_ = new T[size_];
			for (int j = i; j < size_; j++)
			{
				data_[j] = a[j + 1];
			}
		}
	}
	delete[] a;
}
template<typename T>
T Bokju_list<T>::begin()const
{
	return *data_;
}

template<typename T>
T Bokju_list<T>::end() const
{
	if (size_ == 1)
	{
		return begin();
	}
	else {
		return data_[size_ - 1];
	}
}

template<typename T>
T Bokju_list<T>::data() const noexcept
{
	return *data_;
}

template<typename T>
void constexpr Bokju_list<T>::pop_front() {
	a = new T[size_];
	a = data_;
	size_--;
	data_ = new T[size_];

	for (int i = 0; i < size_; i++) {
		data_[i] = a[i + 1];
	}
	delete[]a;
}

template<typename T>
void constexpr Bokju_list<T>::pop_back() {
	a = new T[size_];
	a = data_;

	size_--;
	data_ = new T[size_];

	for (int i = 0; i < size_; i++) {
		data_[i] = a[i];
	}
	delete[]a;
}

template<typename T>
void constexpr Bokju_list<T>::clear() {
	size_ = 0;
	data_ = nullptr;
}

template<typename T>
bool Bokju_list<T>::empty() const
{
	if (size_ <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}