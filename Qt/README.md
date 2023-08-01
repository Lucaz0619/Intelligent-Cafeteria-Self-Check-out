# Intelligent Cafeteria Self Check-out UI Guidance
This directory contains different versions of the interface test files, each of which can be run independently. The icsc series files include the implementation of the face recognition function. The program in ui_test only contains the test running of the basic functions of the interface.

- icsc - face recognition functionality is merged in the main Qt interface file
- icsc_v2 - the face recognition module is separated into a single class and called by the Qt interface c program
- icsc_v3 - the face recognition module is called by connect signal to Widget class slot

## Interface functional design
<p align="center">
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/qt_branch/Qt/img/function flow.png"><br>
</p>    
The functional flow of the whole system is shown above. It involves multi-threaded asynchronous calls.
<br>  

## Compile and run in cmake way
The icsc qt project can be built either by qmake or cmake  
enter build dir and run in terminal:

    cmake ..
    make

and execute icsc:

    ./icsc

## Interface demo
<p align="center">
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/qt_branch/Qt/img/test demo.png"><br>
</p>    

<br>  

