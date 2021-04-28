<p align="center">
<img align="center" alt="GIF" src="https://raw.githubusercontent.com/Alejandra2254/holbertonschool-low_level_programming/master/logo.gif"/>
</p>

<h3 align="center">Hi there 👋, we are Seedtech, a great group of developers </h3>
<h4 align="center"> Thanks to being here to see our first group application </h4>

## About this repo 

The purpose of this repository is to show an elaboration, adaptation and expansion of code carried out in **2** days by the work team under the premise of making an estimate for the capstone project presented, without having previous knowledge in Flutter, to teach them our skills, dexterity and commitment . We want them and we will try our best to get it. 

<h1 align="center"> What do i see!? </h1>
What do i see is an application made for detection of around 80 common default objects based on a photo or image uploaded to the backend of the app. when detecting the elements the application will output the name of the element and the times number it finds the element in the image.

# How it works 

The backend of the application uses the cvlib library, (as long as the openCV, tensorflow packages are installed) after loading the image, the detection of objects is carried out with the call of the function detect_common_objects (). This returns Bbox (minimum bounding box), conf (confidence) and a label as a list of all the elements detected, which it uses to create a dictionary that has as a key the name of the element found and the value of the number of times it was found.

# Technologies 
* python3.5
* pip
* OpenCV
* Tensorflow
* Flutter
* Flast - api

## Usage
