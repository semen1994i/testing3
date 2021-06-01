include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

#QMAKE_CXXFLAGS += -Wall -Wextra -Werror
#QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
    ../app/function.h \
    checkers.h \
    damka.h \
    isBoard.h \
    test_cm.h \
    move.h \
    victory.h \
    motion.h \

SOURCES +=     main.cpp \
    ../app/function.cpp \

INCLUDEPATH += ../app
