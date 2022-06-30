#pragma once

#include <string>

#include "emoji.h"
#include "user.h"
#include "../globals.h"

/**
 * https://discord.com/developers/docs/resources/channel#channel-object-channel-types
 */
enum ChannelType 
{
	/**
	 * A text channel within a guild
	 */
	GuildText,
	/**
	 * A direct message between users
	 */
	DM,
	/**
	 * A voice channel within a guild
	 */
	GuildVoice,
	/**
	 * A direct message between multiple users
	 */
	GroupDM,
	/**
	 * An organizational category that contains up to 50 channels
	 *
	 * See https://support.discord.com/hc/en-us/articles/115001580171-Channel-Categories-101
	 */
	GuildCategory,
	/**
	 * A channel that users can follow and crosspost into their own guild
	 *
	 * See https://support.discord.com/hc/en-us/articles/360032008192
	 */
	GuildNews,
	/**
	 * A thread channel (public) within a Guild News channel
	 */
	GuildNewsThread = 10,
	/**
	 * A public thread channel within a Guild Text channel
	 */
	GuildPublicThread,
	/**
	 * A private thread channel within a Guild Text channel
	 */
	GuildPrivateThread,
	/**
	 * A voice channel for hosting events with an audience
	 *
	 * See https://support.discord.com/hc/en-us/articles/1500005513722
	 */
	GuildStageVoice,
	/**
	 * The channel in a Student Hub containing the listed servers
	 *
	 * See https://support.discord.com/hc/en-us/articles/4406046651927-Discord-Student-Hubs-FAQ
	 */
	GuildDirectory,
	/**
	 * A channel that can only contain threads
	 */
	GuildForum,
};

/**
 * Not documented, but partial only includes id, name, and type
 */
struct APIPartialChannel
{
	/**
	 * The id of the channel
	 */
	Snowflake id;
	/**
	 * The type of the channel
	 *
	 * See https://discord.com/developers/docs/resources/channel#channel-object-channel-types
	 */
	ChannelType type;
	/**
	 * The name of the channel (2-100 characters)
	 */
	std::string name;
};

enum VideoQualityMode 
{
	/**
	 * Discord chooses the quality for optimal performance
	 */
	Auto = 1,
	/**
	 * 720p
	 */
	Full,
};