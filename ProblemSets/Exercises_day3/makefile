#######################################################################	

all: dot_prod.exec normalize_vec.exec serial_pi.exec parallel_pi.exec \
    BS.exec BS_parallel.exec


#######################################################################
#######################################################################	
## EXERCISE 1
normalize_vec.exec : normalize_vec.cpp
	g++ normalize_vec.cpp -fopenmp -o normalize_vec.exec

## EXERCISE 2
dot_prod.exec : dot_prod.cpp
	g++ dot_prod.cpp -fopenmp -o dot_prod.exec

## GET PI
serial_pi.exec : serial_pi.cpp
	g++ serial_pi.cpp -fopenmp -o serial_pi.exec	

## GET PI PARALLEL
parallel_pi.exec : parallel_pi.cpp
	g++ parallel_pi.cpp -fopenmp -o parallel_pi.exec	

## Serial BS
BS.exec : BS.cpp
	g++ BS.cpp -fopenmp -o BS.exec	

## Parallel BS
BS_parallel.exec : BS_parallel.cpp
	g++ BS_parallel.cpp -fopenmp -o BS_parallel.exec	

#######################################################################	
	
clean :
	rm -f *.exec