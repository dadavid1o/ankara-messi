#include <iostream>
using namespace std;
template <typename T, std::size_t N>
class Array {
private:
    T arr[N];
public:
    Array() = default;

    int showSize() {
        std::cout << N << endl;
    }

    T& operator[](size_t index) {
        if (index < N) {
            return arr[index];
        } else {
            throw invalid_argument("error");
        }
        //arr[10]
        //arr[5]
        //5 >= 0 && 5 > 10
    }

//     проверка границ
    T& at(size_t index) {
        if (index < N) {
            return arr[index];
        } else {
            throw invalid_argument("error");
        }
    }

    T& front() {
        return arr[0];
    }

//    N = 5 => последний элемент = 4
    T& back() {
        return arr[N - 1];
    }
//  изменил тип на Array из за того что компилятор ругался на то что возвращал ссылку на T (T&)
    Array<T, N>& fill(T t) {
        for (size_t i = 0; i < N; ++i) {
            arr[i] = t;
        }
        return *this; // возвращает объект массива Array
    }
//     возвращаем указатель на первый элемент массива, то есть можем получить доступ ко всему массиву
    T* data() {
        return arr;
    }
    size_t max_size(){
        return N;
    }
    size_t size(){
        return N;
    }
//std::arr<float, 10> array;
//{array[0] = value;
//array[1] = value2;
//int value = 5;
//for(int i = 0; i < n - 1; i++){
//    array[i] = value;
//array[n - 1] = value;
// n  = 5
//indexes - 0 1 2 3 4
//values -  5 6 7 8 9
//end = n - 1
//arr[end] = arr[n - 1] = 9
};
int main() {
    Array<int, 5> mrr;
    cout << mrr.operator[](2);


    mrr.fill(10);
    for(int i = 0; i < 5; ++i){
        cout << mrr.data()[i] << " ";
    }
    cout << endl;

    cout << mrr.back() << endl;
    cout << mrr.max_size()<< endl;
    cout << mrr.size() << endl;
    return 0;
}