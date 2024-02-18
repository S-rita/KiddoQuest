cmake_minimum_required(VERSION 3.5)

project(KiddoQuest VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        loginwindow.cpp
        loginwindow.h
        loginwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(KiddoQuest
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        signupwindow.h signupwindow.cpp signupwindow.ui
        allgameswindow.h allgameswindow.cpp allgameswindow.ui
        icons.qrc
        mainmenuwindow.h mainmenuwindow.cpp mainmenuwindow.ui
        settingwindow.h settingwindow.cpp settingwindow.ui
        geographywindow.h geographywindow.cpp geographywindow.ui


        gamecomplete.h gamecomplete.cpp gamecomplete.ui
        user.h user.cpp
        members.h members.cpp
        country.h country.cpp
        flaggle_game.h flaggle_game.cpp flaggle_game.ui
        mapper_game.h mapper_game.cpp mapper_game.ui
        englishwindow.h englishwindow.cpp englishwindow.ui
        howtomapper.h howtomapper.cpp howtomapper.ui
        speller_game.h speller_game.cpp speller_game.ui
        objects.h objects.cpp
        animalspeller_game.h animalspeller_game.cpp animalspeller_game.ui
        foodspeller_game.h foodspeller_game.cpp foodspeller_game.ui
        jobspeller_game.h jobspeller_game.cpp jobspeller_game.ui
        placespeller_game.h placespeller_game.cpp placespeller_game.ui
        thingspeller_game.h thingspeller_game.cpp thingspeller_game.ui
        word.h word.cpp
        hangman_game.h hangman_game.cpp hangman_game.ui
        hangmanb1_game.h hangmanb1_game.cpp hangmanb1_game.ui
        hangmanb2_game.h hangmanb2_game.cpp hangmanb2_game.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET KiddoQuest APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(KiddoQuest SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(KiddoQuest
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(KiddoQuest PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.KiddoQuest)
endif()
set_target_properties(KiddoQuest PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS KiddoQuest
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(KiddoQuest)
endif()
