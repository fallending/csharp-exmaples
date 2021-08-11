rm -rf build
mkdir build
cd build

@REM cd build && cmake .. && make && cd ..

if exist VSProject2019 (
    del /q VSProject2019
    for /D %%i in ("VSProject2019/**") DO (
    	if not %%i==".vs" (
            if exist "VSProject2019/%%i" (
                echo Del folder "%%i"
                rd /S /Q "VSProject2019/%%i"
            )
    	)
    )
)

cmake -B "VSProject2019" "sdk/core" ..
cmake --build "VSProject2019" --target "stringutil" --config=debug --parallel || echo "Compile Failed!" && exit /b
cmake --build "VSProject2019" --target "stringutil" --config=release --parallel || echo "Compile Failed!" && exit /b

cd ..
rm -rf ..\bin\Debug/\netcoreapp3.1\stringutil.dll
mv build\VSProject2019\Debug\stringutil.dll ..\bin\Debug\netcoreapp3.1
mv build\VSProject2019\Debug\stringutil.pdb ..\bin\Debug\netcoreapp3.1