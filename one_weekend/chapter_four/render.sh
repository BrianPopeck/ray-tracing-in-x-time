g++ main.cc -o main
./main > image.ppm
gimp \\\\wsl$\\Ubuntu-20.04$(readlink -f image.ppm)