include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
LIBS += -lm


HEADERS +=     tst_test1.h \
    ../app/myfunc.h \
    fibonachi_test.h \
    ../app/squared_equation.h \
    squared_equation_test.h

SOURCES +=     main.cpp \
    ../app/myfunc.c \
    ../app/squared_equation.c

INCLUDEPATH += ../app
