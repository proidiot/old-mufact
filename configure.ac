#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_INIT([mufact], [0.1a], [charlie@stuphlabs.com])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/base64.h])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([-Wall -Werror])
AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.18.1])

# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL

# Checks for libraries.
AC_CHECK_LIB([m], [ceil], [], [AC_MSG_ERROR([The math library is required (and it is very odd that you do not have it).])])
AC_CHECK_LIB([crypto], [BN_init], [], [AC_MSG_ERROR(["libcrypto", a subset of OpenSSL, is required. Sometimes it is called "libssl".])])

# Checks for header files.
AC_CHECK_HEADERS([stddef.h stdint.h stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
AC_TYPE_UINT32_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memmove strnlen])

AC_ARG_ENABLE(debug,
AS_HELP_STRING([--enable-debug],
               [enable debugging, default: no]),
[case "${enableval}" in
             yes) debug=true ;;
             no)  debug=false ;;
             *)   AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
esac],
[debug=false])

AM_CONDITIONAL(DEBUG, test x"$debug" = x"true")

AC_CONFIG_FILES([Makefile src/Makefile test/Makefile po/Makefile.in])
AC_OUTPUT
