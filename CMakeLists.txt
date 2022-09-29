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

set(BRIDGE_SRC_LIST
        src/Bridge/Color.hpp
        src/Bridge/Shape.hpp
        src/Bridge/main.cc)
add_executable(bridge ${BRIDGE_SRC_LIST})

set(DECORATOR_SRC_LIST
        src/Decorator/main.cc
        src/Decorator/Shape.hpp
        src/Decorator/ShapeDecorator.hpp)
add_executable(decorator ${DECORATOR_SRC_LIST})

set(FACADE_SRC_LIST
        src/Facade/main.cc
        src/Facade/Shape.hpp
        src/Facade/ShapeFacade.h)
add_executable(facade ${FACADE_SRC_LIST})

set(FLYWEIGHT_SRC_LIST
        src/Flyweight/main.cc
        src/Flyweight/Shape.hpp
        src/Flyweight/ShapeFactory.hpp)
add_executable(flyweight ${FLYWEIGHT_SRC_LIST})

set(PROXY_SRC_LIST
        src/Proxy/main.cc
        src/Proxy/GoodService.hpp
        src/Proxy/OrangeServiceProxy.hpp)
add_executable(proxy ${PROXY_SRC_LIST})

set(CHAIN_SRC_LIST
        src/Chain/main.cc
        src/Chain/Logger.hpp)
add_executable(chain ${CHAIN_SRC_LIST})

set(COMMAND_SRC_LIST
        src/Command/main.cc
        src/Command/Stock.hpp
        src/Command/Command.hpp
        src/Command/Invoker.hpp)
add_executable(command ${COMMAND_SRC_LIST})

set(ITERATOR_SRC_LIST
        src/Iterator/main.cc
        src/Iterator/Array.hpp)
add_executable(iterator ${ITERATOR_SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)