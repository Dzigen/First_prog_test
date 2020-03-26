TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    myfunc.c \
    squared_equation.c

HEADERS += \
    myfunc.h \
    squared_equation.h

QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
