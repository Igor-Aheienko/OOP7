#include <iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

#include <array>
#include <vector>
#include <deque>
#include <string>

#include "ArrayTasks.h"
#include "VectorTasks.h"
#include "DequeTasks.h"

int main() {
    try {
        std::cout << "===== LAB 7 (Linked Lists) =====\n";

        // ===== Singly =====
        SinglyLinkedList<int> s;
        s.push_back(1);
        s.push_back(2);
        s.push_front(0);
        s.insert(2, 5);

        std::cout << "Singly: " << s << " size=" << s.size() << "\n";
        std::cout << "Find 5 -> " << s.find(5) << "\n";

        s.remove(2);
        std::cout << "After remove: " << s << "\n";


        // ===== Doubly =====
        DoublyLinkedList<std::string> d;
        d.push_back("one");
        d.push_front("zero");
        d.push_back("two");
        d.insert(1, "half");

        std::cout << "Doubly: " << d << " size=" << d.size() << "\n";
        std::cout << "At(2) -> " << d.at(2) << "\n";

        d.remove(1);
        std::cout << "After remove: " << d << "\n";


        std::cout << "\n===== LAB 8 (STL Containers) =====\n";

        // ===== 1. ARRAY =====
        std::array<int, 5> arr = {1, 2, 3, 4, 5};
        shiftRight(arr, 2);

        std::cout << "Array after shift: ";
        for (auto it = arr.begin(); it != arr.end(); ++it)
            std::cout << *it << " ";
        std::cout << "\n";


        // ===== 2. VECTOR =====
        std::vector<int> v1 = {1, 2, 3};
        std::vector<int> v2 = {9, 9, 9};

        insertVector(v1, v2, 1);

        std::cout << "Vector after insert: ";
        for (auto it = v1.begin(); it != v1.end(); ++it)
            std::cout << *it << " ";
        std::cout << "\n";


        // ===== 3. DEQUE =====
        std::deque<int> dq = {1, 2, 3, 4, 5, 6};
        removeMiddle(dq);

        std::cout << "Deque after remove middle: ";
        for (auto it = dq.begin(); it != dq.end(); ++it)
            std::cout << *it << " ";
        std::cout << "\n";


        // ===== 4. OWN CLASS =====
        class Student {
        public:
            std::string name;
            int age;

            Student(std::string n, int a) : name(n), age(a) {}

            void print() const {
                std::cout << name << "(" << age << ") ";
            }
        };

        std::vector<Student> students = {
            Student("Ivan", 18),
            Student("Oleg", 19)
        };

        std::cout << "Students: ";
        for (auto it = students.begin(); it != students.end(); ++it)
            it->print();

        std::cout << "\n";

    }
    catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
        return 1;
    }

    return 0;
}