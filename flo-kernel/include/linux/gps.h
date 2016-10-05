#ifndef GPS_H_
#define GPS_H_

#include <linux/time.h>

struct gps_location {
	double latitude;
	double longitude;
	float  accuracy;  /* in meters */
};

struct gps_kernel {
	struct gps_location location;
	struct timespec timestamp;
};

struct gps_info {
	__u64	latitude;
	__u64	longitude;
	__u32	accuracy;
	__u32	age;
};

void get_k_gps(struct gps_kernel *result);

#endif
