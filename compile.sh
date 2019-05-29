rm -fr build install
mkdir build
cd build
cmake .. -DCMAKE_INSTALL_PREFIX="../install"
cmake --build . --config Debug --target install
cmake --build . --config Release --target install
cd ..

export LD_LIBRARY_PATH="./install/lib":${LD_LIBRARY_PATH}
install/bin/MonExecutable
