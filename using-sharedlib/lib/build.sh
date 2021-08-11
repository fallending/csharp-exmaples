rm -rf build
mkdir -vp build

cd build && cmake .. && make && cd ..

rm -rf ../bin/Debug/netcoreapp3.1/libstringutil.dylib
mv build/libstringutil.dylib ../bin/Debug/netcoreapp3.1