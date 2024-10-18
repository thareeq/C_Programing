# Node.js C++ Addon for Electron Application

Node.js addons enable seamless integration of C++ code into Node.js applications. This repository contains the C++ code and the steps required to compile it into an `addon.node` file, which will be used in our Electron application.

## Prerequisites

Ensure that the system has the **WiringPi** library installed. It's recommended to build this on a Raspberry Pi with the WiringPi repository installed.

### WiringPi Installation (on Raspberry Pi)

You can install WiringPi using the following commands:

```bash
sudo apt-get update
sudo apt-get install wiringpi
```

## Build Command

To compile the C++ code into an addon, run the following command:

```bash
npm run build
```

## Location of Compiled Addon
After building, the addon.node file will be located at:
```bash
/build/Release/addon.node


