# ROS_based_Autonomous_Wheelchair🦼

- [Description](#Description)
- [Steps](#Steps)
  - [Setup Laptop](#Setup-laptop)  
  - [Install ROS Noetic](#Install-ROS-Noetic)
  - [Create WorkSpace](#Create-WorkSpace)
  - [Create Package](#Create-Package)
- [Packages install](#Packages-install)
- [Tools & setup](#Tools-&-setup)
- [IDE](#IDE)
- [Create interactive web](#Create-interactive-web)
  - [Description web](#Description-web)
  - [install](#install)
  - [create React](#create-React)
  - [Start](#Start)
  


# Description
<p> The project aimed to create an innovative and efficient solution to assist individuals with mobility challenges </p>
<p> Our autonomous wheelchair project is implemented on a jetson nano board and utilized advanced algorithms like SLAM (Simultaneous Localization and Mapping) to map the surrounding environment and NavFn for path planning</p>
<p>-Some key components we integrated into the autonomous wheelchair included:</p>
<p>•Kinect camera for capturing depth information</p>
<p>•Optical Wheel encoders that we implemented with two infrared sensors and a disk for accurate distance measurement and precise movement</p>
<p>•IMU (Inertial Measurement Unit) for detecting orientation and motion</p>
<p>in addition, we developed a user-friendly web-based GUI on a touch screen, which allowed users to visualize the map in real-time and set destinations effortlessly
</p>

# Steps
<p>⚡Here we will talk about every step literally from setup to make the project works 🤩</p>

## Setup Laptop
<p> ⚡If you use Windows,You will need Ubuntu version 20.04 as the project works on OS Linux </p>
<p> ⚡depends on if your machine is UEFI or GPT will follow one link of those <a href="https://www.youtube.com/watch?v=aKKdiqVHNqw" >🔗Press</a> or <a href="https://www.youtube.com/watch?v=-iSAyiicyQY&t=18s" >🔗Press</a> </p>

## Install ROS Noetic

<p> 1.Setup your sources.list

```console 
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
```

<p> 2.Set up your keys

```console 
sudo apt install curl # if you haven't already installed curl
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -
```

<p> 3.Installation

```conole 
sudo apt update
```

<p>Now pick what version of ROS you would like to install.
<p> 3.1Desktop-Full Install: (Recommended): Everything in Desktop plus 2D/3D simulators and 2D/3D perception packages

```console
sudo apt install ros-noetic-desktop-full
```

<p> 3.2 Desktop Install: Everything in ROS-Base plus tools like rqt and rviz

```console
sudo apt install ros-noetic-desktop
```

<p> 3.3 ROS-Base: (Bare Bones) ROS packaging, build, and communication libraries. No GUI tools.

```console
sudo apt install ros-noetic-ros-base
```

<p> 4.setup Enviroment -> open terminal and write gedit ~/.bashrc -> will open text editor and put this line 

  ```console 
  source /opt/ros/noetic/setup.bash
  ```

  <p> to make the system able to see ROS 

  OR 

  ```console 
    echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
  ```
    
 <p> for more info for installation <a href="http://wiki.ros.org/noetic/Installation/Ubuntu" >🔗Press</a>

# Create WorkSpace
   
<p> open terminal "Ctrl + Alt + T" then write
  
```console 
  ls 
  mkdir catkin_ws/
  cd catkin_ws/
  ls
  mkdir src
  ls
  catkin_make
```
  
<p>After doing this you should put setup.bash in source so do 
  
 ```console 
  gedit ~/.bashrc 
  ```
  
  then open the text editor ,👀️👀️👀️👀️👀️ put this line after  "source /opt/ros/noetic/setup.bash " that was added above 
  
  ```console 
  source ~/catkin_ws/devel/setup.bash
  ```
  
 # Create Package
  open terminal in directory ~/catkin_ws/src and write
  
  ```console 
  catkin_create_pkg my_package rospy roscpp turtlesim
  ```
  
  then go to ~/catin_ws and open terminal and write
  
  ```console
  catkin_make
  ```
  
 # Packages install
 <p> As we use Arduino in transmitting speed and get data from Encoder we need to install rosserial packages
 
 ```console
 sudo apt-get install ros-noetic-rosserial
 sudo apt-get install ros-noetic-rosserial-msgs
 sudo apt-get install ros-noetic-rosserial-arduino  
 sudo apt-get install ros-noetic-rosserial-python
 sudo apt-cache search ros-noetic-rosserial
 ```
 <p> So you need to install Arduino IDE 
 
 ```console
 sudo apt update
 sudo apt upgrade
 mkdir arduino
 cd arduino/
 wget https://downloads.arduino.cc/arduino-1.8.15-linux64.tar.xz
 tar -xvf ./arduino-1.8.15-linux64.tar.xz
 cd arduino-1.8.15/
 sudo ./install.sh
 ```
 <p> As we create map 3D we need to install RTAB map (that we use SLAM)  
 
 ```console
 sudo apt-get install ros-noetic-rtabmap-ros
 ```
 
 # Create interactive web 
  ## Description web
  <p> load the database of the map created in the web page to enabling real-time visualization of the mapped environment and effortless destination setting for users., this is done using roslibjs
  
  ## install 
  
  ```console 
  sudo apt-get install ros-noetic-rosbridge-server
  sudo apt install npm
  npm install react-bootstrap
  npm install react-router-dom  
  npm install react-joystick-component
  npm install three
  ```
  <p>👀️👀️👀️ look this line will not work with npm 
  
  ```console 
  npm install roslib
  npm install ros2d
  ```
  <p> so to solve this watch video Anis kouba (connection component /import roslib)
  
  <p> If you face the problem that the current version of Node is less than 14, (you can check with this command)
  
  ```console
  node -v
  ```
  
  run these commands
  
  ```console 
  curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.0/install.sh | bash
  nvm install 14
  nvm use 14
  ```
  
  
  ## create React
  ```console
  npx craete-react-app react-ros-robot
  ```
  
  ## Start
  
  ```console
  roslaunch rosbridge_server rosbridge_websocket.launch
  npm start
  ```
  
 
 
