add_executable(matmul src/matrix.cpp ../vector_addition/standart_method.cpp matrix_multiplication.cpp matmulcppAMD.cpp matmul.cpp)
target_include_directories(matmul PRIVATE include)