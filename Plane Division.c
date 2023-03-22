#include <stdio.h>
#include <stdlib.h>
 
#define usi unsigned short int
#define uli unsigned long int
#define ld long double
#define SAME 0
#define PARALLEL 1
#define INTERSECT 2
#define INFINITY 1000000001
#define EPSILON 1.0e-307
 
typedef struct line {
	ld slope, intercept;
} line;

short int cmpLD(ld n1, ld n2) {
	if ((n1 - n2) > EPSILON)
		return 1;
	else if ((n1 - n2) < -EPSILON)
		return -1;
	else
		return 0;
}

static int cmpSlopeAndIntercept (const void *line1, const void *line2) {
	const line *l1 = line1, *l2 = line2;
	if (cmpLD(l1->slope, l2->slope) == -1)
		return -1;
	else if (!cmpLD(l1->slope, l2->slope)) {
		if (cmpLD(l1->intercept, l2->intercept) == -1)
			return -1;
		else if (!(cmpLD(l1->intercept, l2->intercept)))
			return 0;
		else
			return 1;
	}
	else
		return 1;
}
 
usi cmpLines (line l1, line l2) {
	if (cmpLD(l1.slope, l2.slope))
		return INTERSECT;
	else if (!cmpLD(l1.intercept, l2.intercept))
		return SAME;
	else
		return PARALLEL;
}
 
int main (void) {
	uli t, n, i, curr_lps, size_lps;
	long int a, b;
	usi status;
 
	scanf("%lu", &t);
		while (t--) {
		scanf("%lu", &n);
		line l[n];
		for (i = 0; i < n; ++i) {
			scanf("%ld %ld %Lf", &a, &b, &l[i].intercept);
			if (!b) {
				l[i].slope = INFINITY;
				l[i].intercept /= a;
			}
			else {
				l[i].slope = (-a) / (ld)b;
				l[i].intercept /= b;
			}
		}
		if (n == 1) {
			printf("1\n");
			continue;
		}
		qsort(l, n, sizeof(line), cmpSlopeAndIntercept);
		for (i = size_lps = curr_lps = 1; i < n; ++i) {
			status = cmpLines(l[i], l[i - 1]);
			if (status == PARALLEL)
				curr_lps++;
			else if (status == INTERSECT) {
				if (curr_lps > size_lps)
					size_lps = curr_lps;
				curr_lps = 1;
			}
		}
		if (curr_lps > size_lps)
			size_lps = curr_lps;
		printf("%lu\n", size_lps);
	}
	
	return 0;
}
