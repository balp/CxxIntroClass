
makedir build-vc
cd build-vc
cmake -G "Visual Studio 14 2015" .. 
msbuild BasicCppEnvironment.sln
cd ..
