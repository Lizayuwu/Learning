#include <stdio.h>

int main() {
	float PI = 3.141592;
	float area, perimeter, radius;
	printf("Digitai o raio de vosso ciruclo kek\n");
	scanf("%f", &radius);
	area = PI * (radius * radius);
	perimeter = 2 * PI * radius;
	printf("area: %f\nperimeter:%f\n",area, perimeter );
	return 0;
}
