#include "Model.h"

#include <windows.h>
#include <xutility>

namespace Basic
{


    template <typename T, typename T0>
    Model<T, T0>::Model(T initData)
    {
        _data=initData;
    }

    template <typename T, typename T0>
    void Model<T, T0>::BindAction(std::function<std::tuple<T, T>> newMethod)
    {
        Action.emplace_back(newMethod);
    }

    template <typename T, typename T0>
    T Model<T, T0>::Get()
    {
        return _data;
    }

    template <typename T, typename T0>
    void Model<T, T0>::Set(T input)
    {
        for (auto element : Action)
        {
            element(_data, input);
        }
        _data = input;
    }
}
