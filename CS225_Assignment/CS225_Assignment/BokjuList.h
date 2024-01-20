#pragma once
#include <gsl/gsl>
#include <iostream>
#include <type_traits>
#include <memory>

namespace BokjuLibrary
{
    template <typename T>
    class Bokju_list
    {
    private:
        int size_;
        gsl::owner<T*> data_ = nullptr;
        gsl::owner<T*> a = nullptr;

    public:
        Bokju_list();
        Bokju_list(int count);
        Bokju_list(int count, const T& x);
        ~Bokju_list();

        Bokju_list(const Bokju_list& other_Bokju_list);
        Bokju_list(const Bokju_list&& other_Bokju_list);
        Bokju_list& operator=(const Bokju_list& other_Bokju_list);
        Bokju_list& operator=(const Bokju_list&& other_Bokju_list);

        void constexpr push_back(const T& x);
        void constexpr push_front(const T& x);
        int size() const;
        void insert(int count, const T& x) const;
        void remove(const T& x);
        T begin() const;
        T end() const;
        void constexpr pop_front();
        void constexpr pop_back();
        void constexpr clear();
        T data() const noexcept;
        bool empty() const;
    };
}