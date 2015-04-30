wiringPi empty project.

assumes wiringPi is installed. should compile out of the box via the Makefile in the folder, assuming the notes below have been dealt with...

notes:

   cannot seem to add header to config.cmake locally; had to add:

PLATFORM_HEADER_SEARCH_PATHS += $(RPI_ROOT)/usr/local/include

   to config.linuxarmv6l.default.mk...

  (will investigate...)


for cross compile, make sure the built wiringPi libs are in the right system path (e.g. $(RPI_ROOT)/usr/lib or somewhere like that), and headers updated on the compile host in the include directory above.
