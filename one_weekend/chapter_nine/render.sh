g++ main.cc -o main
if [ $? -ne 0 ]
then
    echo 'Failed to compile!'
    return 1
fi


./main > image.ppm
gimp \\\\wsl$\\Ubuntu-20.04$(readlink -f image.ppm)