find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_OUTOFTREE gnuradio-outoftree)

FIND_PATH(
    GR_OUTOFTREE_INCLUDE_DIRS
    NAMES gnuradio/outoftree/api.h
    HINTS $ENV{OUTOFTREE_DIR}/include
        ${PC_OUTOFTREE_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_OUTOFTREE_LIBRARIES
    NAMES gnuradio-outoftree
    HINTS $ENV{OUTOFTREE_DIR}/lib
        ${PC_OUTOFTREE_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-outoftreeTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_OUTOFTREE DEFAULT_MSG GR_OUTOFTREE_LIBRARIES GR_OUTOFTREE_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_OUTOFTREE_LIBRARIES GR_OUTOFTREE_INCLUDE_DIRS)
