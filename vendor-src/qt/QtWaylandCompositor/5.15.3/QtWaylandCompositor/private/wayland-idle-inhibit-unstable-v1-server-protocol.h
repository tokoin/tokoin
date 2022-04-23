/* Generated by wayland-scanner 1.20.0 */

#ifndef IDLE_INHIBIT_UNSTABLE_V1_SERVER_PROTOCOL_H
#define IDLE_INHIBIT_UNSTABLE_V1_SERVER_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-server-core.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_idle_inhibit_unstable_v1 The idle_inhibit_unstable_v1 protocol
 * @section page_ifaces_idle_inhibit_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_idle_inhibit_manager_v1 - control behavior when display idles
 * - @subpage page_iface_zwp_idle_inhibitor_v1 - context object for inhibiting idle behavior
 * @section page_copyright_idle_inhibit_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2015 Samsung Electronics Co., Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_surface;
struct zwp_idle_inhibit_manager_v1;
struct zwp_idle_inhibitor_v1;

#ifndef ZWP_IDLE_INHIBIT_MANAGER_V1_INTERFACE
#define ZWP_IDLE_INHIBIT_MANAGER_V1_INTERFACE
/**
 * @page page_iface_zwp_idle_inhibit_manager_v1 zwp_idle_inhibit_manager_v1
 * @section page_iface_zwp_idle_inhibit_manager_v1_desc Description
 *
 * This interface permits inhibiting the idle behavior such as screen
 * blanking, locking, and screensaving.  The client binds the idle manager
 * globally, then creates idle-inhibitor objects for each surface.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 * @section page_iface_zwp_idle_inhibit_manager_v1_api API
 * See @ref iface_zwp_idle_inhibit_manager_v1.
 */
/**
 * @defgroup iface_zwp_idle_inhibit_manager_v1 The zwp_idle_inhibit_manager_v1 interface
 *
 * This interface permits inhibiting the idle behavior such as screen
 * blanking, locking, and screensaving.  The client binds the idle manager
 * globally, then creates idle-inhibitor objects for each surface.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding interface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and interface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 */
extern const struct wl_interface zwp_idle_inhibit_manager_v1_interface;
#endif
#ifndef ZWP_IDLE_INHIBITOR_V1_INTERFACE
#define ZWP_IDLE_INHIBITOR_V1_INTERFACE
/**
 * @page page_iface_zwp_idle_inhibitor_v1 zwp_idle_inhibitor_v1
 * @section page_iface_zwp_idle_inhibitor_v1_desc Description
 *
 * An idle inhibitor prevents the output that the associated surface is
 * visible on from being set to a state where it is not visually usable due
 * to lack of user interaction (e.g. blanked, dimmed, locked, set to power
 * save, etc.)  Any screensaver processes are also blocked from displaying.
 *
 * If the surface is destroyed, unmapped, becomes occluded, loses
 * visibility, or otherwise becomes not visually relevant for the user, the
 * idle inhibitor will not be honored by the compositor; if the surface
 * subsequently regains visibility the inhibitor takes effect once again.
 * Likewise, the inhibitor isn't honored if the system was already idled at
 * the time the inhibitor was established, although if the system later
 * de-idles and re-idles the inhibitor will take effect.
 * @section page_iface_zwp_idle_inhibitor_v1_api API
 * See @ref iface_zwp_idle_inhibitor_v1.
 */
/**
 * @defgroup iface_zwp_idle_inhibitor_v1 The zwp_idle_inhibitor_v1 interface
 *
 * An idle inhibitor prevents the output that the associated surface is
 * visible on from being set to a state where it is not visually usable due
 * to lack of user interaction (e.g. blanked, dimmed, locked, set to power
 * save, etc.)  Any screensaver processes are also blocked from displaying.
 *
 * If the surface is destroyed, unmapped, becomes occluded, loses
 * visibility, or otherwise becomes not visually relevant for the user, the
 * idle inhibitor will not be honored by the compositor; if the surface
 * subsequently regains visibility the inhibitor takes effect once again.
 * Likewise, the inhibitor isn't honored if the system was already idled at
 * the time the inhibitor was established, although if the system later
 * de-idles and re-idles the inhibitor will take effect.
 */
extern const struct wl_interface zwp_idle_inhibitor_v1_interface;
#endif

/**
 * @ingroup iface_zwp_idle_inhibit_manager_v1
 * @struct zwp_idle_inhibit_manager_v1_interface
 */
struct zwp_idle_inhibit_manager_v1_interface {
	/**
	 * destroy the idle inhibitor object
	 *
	 * Destroy the inhibit manager.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
	/**
	 * create a new inhibitor object
	 *
	 * Create a new inhibitor object associated with the given
	 * surface.
	 * @param surface the surface that inhibits the idle behavior
	 */
	void (*create_inhibitor)(struct wl_client *client,
				 struct wl_resource *resource,
				 uint32_t id,
				 struct wl_resource *surface);
};


/**
 * @ingroup iface_zwp_idle_inhibit_manager_v1
 */
#define ZWP_IDLE_INHIBIT_MANAGER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_idle_inhibit_manager_v1
 */
#define ZWP_IDLE_INHIBIT_MANAGER_V1_CREATE_INHIBITOR_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_idle_inhibitor_v1
 * @struct zwp_idle_inhibitor_v1_interface
 */
struct zwp_idle_inhibitor_v1_interface {
	/**
	 * destroy the idle inhibitor object
	 *
	 * Remove the inhibitor effect from the associated wl_surface.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
};


/**
 * @ingroup iface_zwp_idle_inhibitor_v1
 */
#define ZWP_IDLE_INHIBITOR_V1_DESTROY_SINCE_VERSION 1

#ifdef  __cplusplus
}
#endif

#endif
