if [ -d ${1} ]; then
    c++ ${1}/main.cpp -o ./build/example
    ./build/example
    echo ""
fi
