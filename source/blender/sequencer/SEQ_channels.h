/* SPDX-License-Identifier: GPL-2.0-or-later
 * Copyright 2022 Blender Foundation. All rights reserved. */

#pragma once

/** \file
 * \ingroup sequencer
 */

#ifdef __cplusplus
extern "C" {
#endif

struct Editing;
struct ListBase;
struct Scene;
struct SeqTimelineChannel;

struct ListBase *SEQ_channels_active_get(struct Editing *ed);
void SEQ_channels_active_set(struct Editing *ed, struct ListBase *channels);
void SEQ_channels_ensure(struct ListBase *channels);
void SEQ_channels_duplicate(struct ListBase *channels_dst, struct ListBase *channels_src);
struct SeqTimelineChannel *SEQ_channel_get_by_index(const struct ListBase *channels,
                                                    const int channel_index);
struct ListBase *SEQ_channels_active_get(struct Editing *ed);
char *SEQ_channel_name_get(struct ListBase *channels, const int channel_index);
bool SEQ_channel_is_locked(const struct SeqTimelineChannel *channel);
bool SEQ_channel_is_muted(const struct SeqTimelineChannel *channel);

#ifdef __cplusplus
}
#endif
