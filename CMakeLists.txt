cmake_minimum_required(VERSION 3.19)
project(BLACKJACK_EDIT_DIVIDED LANGUAGES CXX)

set(CMAKE_AUTORCC ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(BLACKJACK_EDIT_DIVIDED
    WIN32 MACOSX_BUNDLE

    src/main.cpp
    src/mainwindow.cpp
    src/BlackjackWindow.cpp
    src/BlackjackGame.cpp
    src/mainwindow.ui

    include/mainwindow.h
    include/BlackjackGame.h
    include/BlackjackWindow.h
    include/Card.h

    resources.qrc
)

target_include_directories(BLACKJACK_EDIT_DIVIDED
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(BLACKJACK_EDIT_DIVIDED
    PRIVATE
        Qt::Core
        Qt::Widgets
)