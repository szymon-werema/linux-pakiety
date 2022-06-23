#
# Regular cron jobs for the gparted package.
#
0 4	* * *	root	[ -x /usr/bin/gparted_maintenance ] && /usr/bin/gparted_maintenance
