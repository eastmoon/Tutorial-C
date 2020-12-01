if [ -d ${1} ]; then
    cmake -S ./${1} ./build/${1}
    make -C ./build/${1}
    echo ">> Execute example"
    echo ""
    ./build/${1}/example
    echo ""
fi
