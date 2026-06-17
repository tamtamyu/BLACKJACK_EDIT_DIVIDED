cmake_minimum_required(VERSION 3.19)
project(BLACKJACK_EDIT_DIVIDED LANGUAGES CXX)

set(CMAKE_AUTORCC ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets LinguistTools)

qt_standard_project_setup()

qt_add_executable(BLACKJACK_EDIT_DIVIDED
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    BlackjackGame.h
    BlackjackWindow.h
    Card.h
    BlackjackWindow.cpp
    BlackjackGame.cpp
    resources.qrc

)

qt_add_translations(
    TARGETS BLACKJACK_EDIT_DIVIDED
    TS_FILES BLACKJACK_EDIT_DIVIDED_ja_JP.ts
)

target_link_libraries(BLACKJACK_EDIT_DIVIDED
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS BLACKJACK_EDIT_DIVIDED
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET BLACKJACK_EDIT_DIVIDED
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
