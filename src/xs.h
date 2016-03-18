#ifndef _XS_H_
# define _XS_H_

int xs_write_str(const char *base, const char *node, const char *val);
char *xs_read_str(const char *base, const char *node);
int xs_write_int(const char *base, const char *node, int ival);
int xs_read_int(const char *base, const char *node, int *ival);
int xs_write_be_str(struct xen_device *xendev, const char *node, const char *val);
int xs_write_be_int(struct xen_device *xendev, const char *node, int ival);
char *xs_read_be_str(struct xen_device *xendev, const char *node);
int xs_read_be_int(struct xen_device *xendev, const char *node, int *ival);
char *xs_read_fe_str(struct xen_device *xendev, const char *node);
int xs_read_fe_int(struct xen_device *xendev, const char *node, int *ival);
int backend_print(xen_backend_t xenback, int devid, const char *node, const char *fmt, ...);
int backend_scan(xen_backend_t xenback, int devid, const char *node, const char *fmt, ...);
int frontend_scan(xen_backend_t xenback, int devid, const char *node, const char *fmt, ...);

#endif /* !_XS_H_ */

