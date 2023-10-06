# Intelligent-Cafeteria-Self-Check-out  

<p align="center">
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/Qt/icsc/pic/logo2.png" width="300" height="300"><br>
</p>    

<br>  
Ａ cutting-edge solution for university cafeterias that streamlines the dining experience. This innovative system utilizes advanced dish recognition technology to accurately calculate the cost of meals. Additionally, it employs facial recognition for payment processing, significantly reducing wait times for students. The Intelligent Cafeteria Self Check-Out not only enhances the overall dining experience but also ensures that students can enjoy their meals and swiftly return to their academic pursuits. Transform your university's cafeteria into an efficient, time-saving, and enjoyable dining destination with the Intelligent Cafeteria Self-Check-Out System.

![demo](pic/demo.gif) 

## Table of Contents
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation & Usage](#installation--usage)
- [Unit Test](#unit-test)
- [Contributors](#contributors)
- [Social Media](#social-media)
- [License](#license)

## Features

- Rasberry Pi and camera module
- Real-time dishes and face recognition
- YOLOv5 Lite for efficient and accurate dishes detection
- OpenCV 4.5.1 for reliable face recognition
- Intuitive Qt-based graphical user interface

## Prerequisites
- Qt 5.15 or higher
- OpenCV 4.5.1

## Installation & Usage
### 1. Clone the repository:

```bash
git clone https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out.git
```

### 2. Make and run the main application:

```bash
cd ../QT/icsc/build
cmake ..
make
./icsc
```

For more information, please take a look at [WIKI](https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/wiki)!

## Unit Test

### test_recognizer.cpp

To run face recognition test, run the following command from the project directory:
```
$ ./test_recognizer
```

The output should look like this:
<p align="center">
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/Qt/icsc/pic/result%20for%20recognizer.png"><br>
</p>  

### test_trainer.cpp

To run face training test, run the following command from the project directory:
```
$ ./test_trainer
```

The output should look like this:
<p align="center">
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/Qt/icsc/pic/result%20for%20trainer%2001.png"><br>
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/Qt/icsc/pic/result%20for%20trainer%2002.png"><br>
</p>  

## Demo

<p align="center">
    <img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/Qt/img/WechatIMG351.png" width="500" height="500"><br>
</p>   


## Contributors
This project is developed by students of MSc Robotics and AI of the University of Glasgow, please feel free to contact us if you want to contribute!

- [Ching Hsuan Lin](https://github.com/Lucaz0619) 2702329L@student.gla.ac.uk
- [Weijian Ning](https://github.com/Wikian233) 2821551N@student.gla.ac.uk
- [Wanshu Yu](https://github.com/romyfish) 2817055Y@student.gla.ac.uk
- [Chengyu Chen](https://github.com/RyangeChen) 2514864C@student.gla.ac.uk

## Social Media

[<img src="https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/Qt/icsc/pic/vecteezy_instagram-mobile-app-logo-instagram-app-icon-ig-app-free_18757860.jpg" width="100" height="100">](https://www.instagram.com/intelligent_cafe/)

## License
This project is licensed under the [`MIT License`](https://github.com/Lucaz0619/Intelligent-Cafeteria-Self-Check-out/blob/main/LICENSE).


