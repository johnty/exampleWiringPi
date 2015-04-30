wiringPi empty project.

assumes wiringPi is installed.

notes:

   cannot seem to add header to config.cmake locally; had to add:

PLATFORM_HEADER_SEARCH_PATHS += $(RPI_ROOT)/usr/local/include

   to config.linuxarmv6l.default.mk...

  (will investigate...)


for cross compile, make sure the built wiringPi libs are in the right system path, and headers updated on the compile host in the include directory above.
