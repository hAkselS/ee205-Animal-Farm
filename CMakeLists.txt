cmake_minimum_required(VERSION 3.22)
project(_ee205_lab_08d_animal_farm_1_to_clion)

set(CMAKE_CXX_STANDARD 14)
#pounds are comments
#addCats.cpp addCats.h catDatabase.cpp catDatabase.h deleteCats.cpp deleteCats.h reportCats.cpp reportCats.h updateCats.cpp updateCats.h
add_executable(_ee205_lab_08d_animal_farm_1_to_clion main.cpp config.h Cat.cpp Cat.h Weight.cpp Weight.h Node.cpp Node.h List.cpp List.h SinglyLinkedList.cpp SinglyLinkedList.h Animal.cpp Animal.h Mammal.cpp Mammal.h SinglyLinkedList.cpp SinglyLinkedList.h Color.h)
