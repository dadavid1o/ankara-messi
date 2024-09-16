//
// Created by Arutunyan David on 15.09.2024.
//
#ifndef STD_ARRAY_STD__ARRAY_HPP
#define STD_ARRAY_STD__ARRAY_HPP
#include <iostream>
#include <stdexcept>
template <typename T, std::size_t N>
class Array{
public:
    Array() = default;

    T& operator[](std::size_t index);
    T& at(std::size_t index);
    T& front();
    T& back();
    Array<T, N>& fill(T t);
    T* data();
    std::size_t max_size();
    std::size_t size();
private:
    T arr[N];
};


//реализация функций
template <typename T, std::size_t N>
T &Array<T, N>::operator[](std::size_t index) {// оператор квадратные скобки
    if(index < N){
        return arr[index];
    }
    std::invalid_argument("error");
}

template <typename T, std::size_t N>
T &Array<T, N>::at(std::size_t index) {// доступ к элементам массива по индексу
    if(index < N){
        return arr[index];
    }
    std::invalid_argument("error");
}

template <typename T, std::size_t N>
T &Array<T, N>::front() {// доступ к первому элементу массива
    return arr[0];
}

template <typename T, std::size_t N>
T &Array<T, N>::back() {// доступ к последнему элементу массива
    return arr[N - 1];
}

template <typename T, std::size_t N>
Array<T, N>& Array<T, N>::fill(T t){// заполение массива одним знчением
    for(int i = 0; i < N; i++){
        arr[i] = t;
    }
    return *this;
}

template <typename T, std::size_t N>
T *Array<T, N>::data() {// возращает указатель на первый элемент массива
    return arr;
}

template <typename T, std::size_t N>
std::size_t Array<T, N>::max_size() { // возвращает максимальные размер массива
    return N;
}

template <typename T, std::size_t N>
std::size_t Array<T, N>::size() { // возращает текущий размер массива
    return N;
}

#endif //STD_ARRAY_STD__ARRAY_HPP
