# Doxygen
Doxygen is the de facto standard tool for generating documentation from annotated C++ sources, but it also supports other popular programming languages.

## How to create your first project with doxygen
1. Use the same file structure I used.
2. Create dir called ```build```
3. install ```graphviz```  used for graphics.
```
sudo apt install graphviz
```
4. from the build dir call the command ```cmake ..``` then ```make```
5. You will find the ```index.html``` in
```
/build/doc_doxygen/html/index.html
```