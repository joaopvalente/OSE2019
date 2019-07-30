#!/bin/bash -l

#SBATCH --ntasks=1
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=24

#SBATCH --time=00:30:00


#SBATCH --job-name=BS
#SBATCH --output=BS_parallel.out
#SBATCH --error=BS_parallel.err

export OMP_NUM_THREADS=24


### openmp executable
./BS_parallel.exec

