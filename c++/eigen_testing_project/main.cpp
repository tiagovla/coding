#include <iostream>
#include <chrono>
#define EIGEN_USE_MKL_ALL
#include "Eigen/Dense"

//-O2 -DNDEBUG -fopenmp
// g++ -o main *.cpp -O2 -DNDEBUG -fopenmp -Wl,--start-group /home/tgg/intel/mkl/lib/intel64/libmkl_intel_lp64.a /home/tgg/intel/mkl/lib/intel64/libmkl_gnu_thread.a /home/tgg/intel/mkl/lib/intel64/libmkl_core.a -Wl,--end-group -lgomp -lpthread -lm -ldl -m64 -I /home/tgg/intel/mkl/include  && "/home/tgg/Dropbox/git_projects/coding/c++/eigen_testing_project/"main
using namespace Eigen;
int main()
{
    int n = Eigen::nbThreads( );
    std::cout << "#Threads: " << n << std::endl;

    std::chrono::time_point<std::chrono::system_clock> start, end;
    int n_a_rows = 10000;
    int n_a_cols = 10000;
    int n_b_rows = n_a_cols;
    int n_b_cols = n_a_rows;

    MatrixXf a(n_a_rows, n_a_cols);

    for (int i = 0; i < n_a_rows; ++ i)
        for (int j = 0; j < n_a_cols; ++ j)
        a (i, j) = n_a_cols * i + j;

    MatrixXf b (n_b_rows, n_b_cols);
    for (int i = 0; i < n_b_rows; ++ i)
        for (int j = 0; j < n_b_cols; ++ j)
        b (i, j) = n_b_cols * i + j;

    MatrixXf d (n_a_rows, n_b_cols);

    start = std::chrono::system_clock::now();
    d = a * b;
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_secs = end - start;
    std::cout << "Time taken : " << elapsed_secs.count() << std::endl;

}
