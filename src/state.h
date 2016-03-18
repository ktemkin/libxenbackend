#ifndef _STATE_H_
# define _STATE_H_

void backend_changed(struct xen_device *xendev, const char *node);
void frontend_changed(struct xen_device *xendev, const char *node);
void check_state(struct xen_device *xendev);
int check_state_early(struct xen_device *xendev);

#endif /* !_STATE_H_ */

