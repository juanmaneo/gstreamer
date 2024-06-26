/* GStreamer
 * Copyright (C) 2022 Seungha Yang <seungha@centricular.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#pragma once

#include <gst/gst.h>
#include <gst/cuda/cuda-prelude.h>

G_BEGIN_DECLS

#define GST_CAPS_FEATURE_MEMORY_CUDA_NVMM_MEMORY "memory:NVMM"

GST_CUDA_API
gboolean                gst_cuda_nvmm_init_once       (void);

GST_CUDA_API
GstBufferPool *         gst_cuda_nvmm_buffer_pool_new (void);

G_END_DECLS
