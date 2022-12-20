#include <optional>
#include <Eigen/Core>
#include <stdio.h>

typedef Eigen::Matrix<double, 2, 2> Jacobian;

void foo(const std::optional<Jacobian> optional) {
	Jacobian* j;
	if (optional) {
		// print the optional eigen matrx
		j = &(*optional);
		printf("true");
	} else {
		printf("optional has no value");
	}
}

int main() {
	// foo({0,1,2,3,4});
	foo(std::nullopt);
}
