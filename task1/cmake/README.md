cd build

**to compile with float:** 
cd build
cmake -DTYPE=float ..
make
./main

**result:** 0.381143

**to compile with double:**
cd build
cmake -DTYPE=double ..
make
./main

**result:** -4.07074e-10
