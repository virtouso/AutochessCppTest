#pragma once
#include <functional>
#include <pplinterface.h>
#include <vector>

namespace Basic
{
    template <
        typename T,typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
    class Model
    {
    public:
        Model(T initData);
        std::vector<std::function<std::tuple<T, T>>> Action;
        void BindAction( std::function< std::tuple<T, T>> newMethod);
        T Get();
        void Set(T input);

    private:
        T _data;
    };

  
}
