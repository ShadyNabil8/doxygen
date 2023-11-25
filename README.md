# Doxygen
Doxygen is the de facto standard tool for generating documentation from annotated C++ sources, but it also supports other popular programming languages.

## How to create your first project with doxygen
1. install doxygen
```
sudo apt-get install doxygen
```
2. Use the same file structure I used.
3. Create dir called ```build```
4. install ```graphviz```  used for graphics.
```
sudo apt install graphviz
```
5. from the build dir call the command ```cmake ..``` then ```make```
6. You will find the ```index.html``` in
```
/build/doc_doxygen/html/index.html
```