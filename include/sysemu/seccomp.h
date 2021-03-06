/*
 * QEMU seccomp mode 2 support with libseccomp
 *
 * Copyright IBM, Corp. 2012
 *
 * Authors:
 *  Eduardo Otubo    <eotubo@br.ibm.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2.  See
 * the COPYING file in the top-level directory.
 *
 * Contributions after 2012-01-13 are licensed under the terms of the
 * GNU GPL, version 2 or (at your option) any later version.
 */
#ifndef QEMU_SECCOMP_H //define a variable whose usage remains to be known.
#define QEMU_SECCOMP_H

#include <seccomp.h> //a sandbox system offered by linux, in this secure computing mode, only read(), write(), exit() and sigreturn() are allowed.
#include "qemu/osdep.h"

int seccomp_start(void); // ????
#endif
