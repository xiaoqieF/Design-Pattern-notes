cmake_minimum_required(VERSION 3.10)

project(DesignPatterns-notes)

set(BUILDER_SRC_LIST
        src/Builder/Builder.hpp
        src/Builder/Car.hpp
        src/Builder/Director.hpp
        src/Builder/main.cc)
add_executable(builder ${BUILDER_SRC_LIST})

set(FACTORYMETHOD_SRC_LIST
        src/FactoryMethod/Car.hpp
        src/FactoryMethod/CarFactory.hpp
        src/FactoryMethod/main.cc)
add_executable(factorymethod ${FACTORYMETHOD_SRC_LIST})

set(SINGLETON_SRC_LIST
        src/Singleton/Singleton.hpp
        src/Singleton/main.cc)
add_executable(singleton ${SINGLETON_SRC_LIST})

set(ADAPTER_SRC_LIST
        src/Adapter/Print.hpp
        src/Adapter/Banner.hpp
        src/Adapter/main.cc
        )
add_executable(adapter ${ADAPTER_SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)