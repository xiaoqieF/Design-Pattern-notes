//
// Created by fxd on 22-9-29.
//

#ifndef DESIGNPATTERNS_NOTES_ARRAY_HPP
#define DESIGNPATTERNS_NOTES_ARRAY_HPP
#include <cstring>

namespace iterator {
    template <class T>
    class Array {
    public:
        Array() {
            start_ = new T[INIT_SIZE];
            end_ = start_;
        }
        ~Array() {
            delete[] start_;
        }
        void push_back(const T& t) {
            // reallocate
            if (end_ - start_ >= capacity_) {
                T* newStart = new T[capacity_ * 2];
                memcpy(newStart, start_, capacity_ * sizeof(T));
                delete[] start_;
                start_ = newStart;
                end_ = start_ + capacity_;
                capacity_ = capacity_ * 2;
            }
            *end_++ = t;
        }
        int size() const {
            return end_ - start_;
        }
        int capacity() const {
            return capacity_;
        }
        T operator[](int i) {
            return *(start_ + i);
        }

        /// fix me, not complete
        class Iterator {
        public:
            Iterator(T* pointer):pointer_(pointer) {}
            T& operator*() { return *pointer_; }
            Iterator& operator++() {
                ++pointer_;
                return *this;
            }
            Iterator operator++(int) {
                T* tmp = pointer_;
                ++pointer_;
                return Iterator(tmp);
            }
            bool operator==(const Iterator& rhs) {
                return pointer_ == rhs.pointer_;
            }
            bool operator!=(const Iterator& rhs) {
                return !operator==(rhs);
            }
            bool operator>(const Iterator& rhs) {
                return pointer_ - rhs.pointer_ > 0;
            }
        private:
            T* pointer_;
        };

        Iterator begin() {
            return Iterator(start_);
        }
        Iterator end() {
            return Iterator(end_);
        }
    private:
        static const int INIT_SIZE = 10;
        T* start_ = nullptr;
        T* end_ = nullptr;
        int capacity_ = INIT_SIZE;
    };
}
#endif //DESIGNPATTERNS_NOTES_ARRAY_HPP
