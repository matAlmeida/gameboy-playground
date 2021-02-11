# GameBoy starter

To find base project go to branch `starter`

## What you will need

- [GameBoy Development Kit (GBDK)](https://github.com/Zal0/gbdk-2020/releases)
- [GameBoy Emulator (BGB)](http://bgb.bircd.org/)
- [GameBoy Tile Designer](http://www.devrs.com/gb/hmgd/gbtd.html)

After download this tools extract then in a place of your preference. After extract the GBDK make sure to add it's `bin` folder included in your path.

Also you'll need to update the following files with the correct paths

- `make.bat` - Update the `lcc` path
- `watch.bat` - Update the `BGB.exe` path

    Note: If you are using VS Code to programming make sure to also update the `includePath` in `.vscode/c_cpp_properties.json`

## Files

- `make.bat` - Script that generates the `.gb` file that can run inside the `BGB`
- `watch.bat` - Script file that make you `BGB` watch for changes in the `.gb` file and reload the ROM

## Knowledge Base

- [Programming Game Boy Games using GBDK](https://videlais.com/2016/07/03/programming-game-boy-games-using-gbdk-part-1-configuring-programming-and-compiling/)
- [Game Boy Pan Docs](https://gbdev.io/pandocs/)
- [Gaming Monsters Write your own Game Boy Games Playlist](https://www.youtube.com/playlist?list=PLeEj4c2zF7PaFv5MPYhNAkBGrkx4iPGJo)
- [Modern Vintage Gamer](https://www.youtube.com/watch?v=FzPTK91EJY8)
