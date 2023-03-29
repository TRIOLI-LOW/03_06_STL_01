
#include <iostream>
template<class T>
class vector {
private:
    T* arr{};
    int index = 0;
    int size = 0;
    int local_size = 1;
public:

     vector() {
        arr = new T[local_size]; 

     }
    void  push_back(T value) {
        if (size == local_size) {
            local_size *= 2;
            T* arr_2 = new T[local_size];
            for (int i = 0; i < size ; ++i) {
                arr_2[i] = arr[i];
            }
            delete[] arr;

            arr = new T[local_size];
            for (int i = 0; i < size; ++i) {
                arr[i] = arr_2[i];
               
            }
            arr[index] = value;
            delete[] arr_2;
        }
        else {
            arr[index] = value;
        }
        ++size;
        ++index;
     }

    int Size() {
        
        return size;
    }

    int Capacity() {
       
        return local_size - size;
    }


     T at(int index_) {
         //int index = index_;
         return arr[index_];
     };

};


int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(5);
    std::cout << "Capacity: " << arr.Capacity() << std::endl;
    std::cout << "Size :    " << arr.Size() << std::endl;
    arr.push_back(6);
    std::cout << "Capacity: " << arr.Capacity() << std::endl;
    std::cout << "Size :    " << arr.Size() << std::endl;
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(4);
    std::cout << "Capacity: " << arr.Capacity() << std::endl;
    std::cout << "Size :    " << arr.Size() << std::endl;
    int a = arr.at(6);
 
    for (int i = 0; i < arr.Size(); ++i) {
        std::cout << arr.at(i) << std::endl;

    }
    std::cout << "a: " << a;

}
