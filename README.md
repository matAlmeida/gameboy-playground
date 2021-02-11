# GameBoy starter

## What you will need

- [GameBoy Development Kit (GBDK)](https://github.com/Zal0/gbdk-2020/releases)
- [GameBoy Emulator (BGB)](http://bgb.bircd.org/)
- [GameBoy Tile Designer](http://www.devrs.com/gb/hmgd/gbtd.html)

After download this tools extract then in a place of your preference. After extract the GBDK make sure to add it's `bin` folder included in your path.

Also you'll need to update the following files with the correct paths

- `make.bat` - Update the `lcc` path
- `watch.bat` - Update the `BGB.exe` path

    Note: If you are using VS Code to programming make sure to also update the `includePath` in `.vscode/c_cpp_properties.json`