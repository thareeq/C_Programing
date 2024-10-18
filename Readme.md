# Node.js C++ Addon for Electron Application

Node.js addons enable seamless integration of C++ code into Node.js applications. This repository contains the C++ code and the steps required to compile it into an `addon.node` file, which will be used in our Electron application.

## Prerequisites

To build this code, ensure you are using a system with the WiringPi library installed, preferably a Raspberry Pi with the Wiring Pi repository set up.


## Build Command

To compile the C++ code into an addon, run the following command:

```bash
npm run build
```

## Location of Compiled Addon
After building, the addon.node file will be located at:
```bash
/build/Release/addon.node
```

