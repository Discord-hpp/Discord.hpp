#pragma once

#include <string>

#include "channel.h"
#include "emoji.h"
#include "user.h"
#include "../globals.h"



struct PresenceUpdateStatus
{
	std::string Online = "online";
	std::string DoNotDisturb = "dnd";
	std::string Idle = "idle";
	/**
	 * Invisible and shown as offline
	 */
	std::string Invisible = "invisible";
	std::string Offline = "offline";
};

/**
 * @unstable This struct is currently not documented by Discord but has known values which we will try to keep up to date.
 * Values might be added or removed without a major version bump.
 */
struct ActivityPlatform
{
	std::string Desktop = "desktop";
	std::string Xbox = "xbox";
	std::string Samsung = "samsung";
	std::string IOS = "ios";
	std::string Android = "android";
	std::string Embedded = "embedded";
	std::string PS4 = "ps4";
	std::string PS5 = "ps5";
};

/**
 * https://discord.com/developers/docs/topics/gateway#activity-object-activity-types
 */
enum ActivityType
{
	/**
	 * Playing {game}
	 */
	Playing,
	/**
	 * Streaming {details}
	 */
	Streaming,
	/**
	 * Listening to {name}
	 */
	Listening,
	/**
	 * Watching {details}
	 */
	Watching,
	/**
	 * {emoji} {details}
	 */
	Custom,
	/**
	 * Competing in {name}
	 */
	Competing,
};



/**
 * https://discord.com/developers/docs/topics/gateway#activity-object-activity-flags
 */
enum ActivityFlags
{
	Instance = 1 << 0,
	Join = 1 << 1,
	Spectate = 1 << 2,
	JoinRequest = 1 << 3,
	Sync = 1 << 4,
	Play = 1 << 5,
	PartyPrivacyFriends = 1 << 6,
	PartyPrivacyVoiceChannel = 1 << 7,
	Embedded = 1 << 8,
};


