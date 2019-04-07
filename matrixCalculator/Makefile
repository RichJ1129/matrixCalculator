
matrixCalculator: main.o inputValidation.o readMatrix.o determinant.o
	g++ main.o inputValidation.o readMatrix.o determinant.o -o matrixCalculator

main.o: main.cpp
	g++ -c main.cpp

inputValidation.o: inputValidation.cpp inputValidation.hpp
	g++ -c inputValidation.cpp

readMatrix.o: readMatrix.cpp readMatrix.hpp
	g++ -c readMatrix.cpp

determinant.o: determinant.cpp determinant.hpp
	g++ -c determinant.cpp
clean: 
	rm *.o matrixCalculator