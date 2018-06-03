# Build Instructions:


## First Method: Using an IDE
1. Install [Platformio IDE](https://platformio.org/platformio-ide) for either [Atom](https://atom.io/) or [VS Code](https://code.visualstudio.com/)
2. Open the project, and then build and upload

## Second method: Terminal
1. Install [Python 2.7](https://www.python.org/downloads/) and pip (make sure to add python to PATH if you're on Windows)
```
pip install -U platformio
```

ALTERNATIVELY, 
```
python -c "$(curl -fsSL https://raw.githubusercontent.com/platformio/platformio/develop/scripts/get-platformio.py)"
```

2. 
```
platformio run -t upload
```

----

On Windows, ensure you have the proper drivers, and on UNIX, make sure to do the following:
```
sudo usermod -a -G dialout yourusername
```
```
sudo curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core/develop/scripts/99-platformio-udev.rules > /etc/udev/rules.d/99-platformio-udev.rules
```
Refer to this guide for more help: http://docs.platformio.org/en/latest/installation.html
