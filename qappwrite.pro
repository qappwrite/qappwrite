QT += \
    core \
    network \
    websockets

TEMPLATE = lib

DEFINES += QAPPWRITE_LIBRARY

CONFIG += c++17

TARGET = QAppWrite

include(src/AWClient.pri)
