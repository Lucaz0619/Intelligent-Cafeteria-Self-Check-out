# Intelligent Cafeteria Self Check-out UI Guidance
This directory contains different versions of the interface test files, each of which can be run independently. The icsc series files include the implementation of the face recognition function. The program in ui_test only contains the test running of the basic functions of the interface.

    icsc - face recognition functionality is merged in the main Qt interface file
    icsc_v2 - the face recognition module is separated into a single class and called by the Qt interface c program
    icsc_v3 - the face recognition module is called by connect signal to Widget class slot

The icsc qt project can be built either by qmake or cmake

## Compile and run in cmake way
enter build dir and run in terminal:

    cmake ..
    make

and execute icsc:

    ./icsc
