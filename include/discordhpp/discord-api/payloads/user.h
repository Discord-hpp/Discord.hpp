#pragma once

#include <cmath>
#include <string>

#include "../globals.h"

/**
 * https://discord.com/developers/docs/resources/user#user-object-user-flags
 */
struct UserFlags
{
	enum
	{ 
		/**
		 * Discord Employee
		 */
		Staff = 1 << 0,
		/**
		 * Partnered Server Owner
		 */
		Partner = 1 << 1,
		/**
		 * HypeSquad Events Member
		 */
		Hypesquad = 1 << 2,
		/**
		 * Bug Hunter Level 1
		 */
		BugHunterLevel1 = 1 << 3,
		/**
		 * House Bravery Member
		 */
		HypeSquadOnlineHouse1 = 1 << 6,
		/**
		 * House Brilliance Member
		 */
		HypeSquadOnlineHouse2 = 1 << 7,
		/**
		 * House Balance Member
		 */
		HypeSquadOnlineHouse3 = 1 << 8,
		/**
		 * Early Nitro Supporter
		 */
		PremiumEarlySupporter = 1 << 9,
		/**
		 * User is a team
		 * https://discord.com/developers/docs/topics/teams
		 */
		TeamPseudoUser = 1 << 10,
		/**
		 * Bug Hunter Level 2
		 */
		BugHunterLevel2 = 1 << 14,
		/**
		 * Verified Bot
		 */
		VerifiedBot = 1 << 16,
		/**
		 * Early Verified Bot Developer
		 */
		VerifiedDeveloper = 1 << 17,
		/**
		 * Discord Certified Moderator
		 */
		CertifiedModerator = 1 << 18,
		/**
		 * Bot uses only HTTP interactions
		 * https://discord.com/developers/docs/interactions/receiving-and-responding#receiving-an-interaction
		 * and is shown in the online member list
		 */
		BotHTTPInteractions = 1 << 19,
		/**
		 * User has been identified as spammer
		 *
		 * @unstable This user flag is currently not documented by Discord 
		 * but has a known value which we will try to keep up to date.
		 * 
		 * @note This is pre-added until Discord releases.
		 */
		Spammer = 1 << 20,
	};
	/**
	 * User's account has been quarantined based on recent activity
	 *
	 * @unstable This user flag is currently not documented by Discord
	 * but has a known value which we will try to keep up to date.
	 * 
	 * @note This double is just for pre-added until Discord releases.
	 */
	double Quarantined = std::pow(2, 44);
};

/**
 * https://discord.com/developers/docs/resources/user#user-object-premium-types
 */
enum UserPremiumType
{
	None,
	NitroClassic,
	Nitro,
};

/**
 * https://discord.com/developers/docs/resources/user#user-object
 */
struct APIUser
{
	/**
	 * The user's id
	 */
	Snowflake id;
	/**
	 * The user's username, not unique across the platform
	 */
	std::string username;
	/**
	 * The user's 4-digit discord-tag
	 */
	std::string discriminator;
	/**
	 * The user's avatar hash
	 *
	 * See https://discord.com/developers/docs/reference#image-formatting
	 */
	std::string avatar;
	/**
	 * Whether the user belongs to an OAuth2 application
	 */
	bool bot;
	/**
	 * Whether the user is an Official Discord System user (part of the urgent message system)
	 */
	bool system;
	/**
	 * Whether the user has two factor enabled on their account
	 */
	bool mfa_enabled;
	/**
	 * The user's banner hash
	 *
	 * See https://discord.com/developers/docs/reference#image-formatting
	 */
	std::string banner;
	/**
	 * The user's banner color encoded as an integer representation of hexadecimal color code
	 */
	unsigned int accent_color;
	/**
	 * The user's chosen language option
	 */
	std::string locale;
	/**
	 * Whether the email on this account has been verified
	 */
	bool verified;
	/**
	 * The user's email
	 */
	std::string email;
	/**
	 * The flags on a user's account
	 *
	 * See https://discord.com/developers/docs/resources/user#user-object-user-flags
	 */
	UserFlags flags;
	/**
	 * The type of Nitro subscription on a user's account
	 *
	 * See https://discord.com/developers/docs/resources/user#user-object-premium-types
	 */
	UserPremiumType premium_type;
	/**
	 * The public flags on a user's account
	 *
	 * See https://discord.com/developers/docs/resources/user#user-object-user-flags
	 */
	UserFlags public_flags;
};

/**
 * https://discord.com/developers/docs/resources/user#connection-object
 */
enum ConnectionVisibility {
	/**
	 * Invisible to everyone except the user themselves
	 */
	None,
	/**
	 * Visible to everyone
	 */
	Everyone,
};

/**
 * https://discord.com/developers/docs/resources/user#connection-object
 */
struct APIConnection
{
	/**
	 * ID of the connection account
	 */
	std::string id;
	/**
	 * The username of the connection account
	 */
	std::string name;
	/**
	 * The service of the connection
	 */
	std::string type;
	/**
	 * Whether the connection is revoked
	 */
	bool revoked;
	/**
	 * An array of partial server integrations
	 *
	 * See https://discord.com/developers/docs/resources/guild#integration-object
	 */
	// integrations
	/**
	 * Whether the connection is verified
	 */
	bool verified;
	/**
	 * Whether friend sync is enabled for this connection
	 */
	bool friend_sync;
	/**
	 * Whether activities related to this connection will be shown in presence updates
	 */
	bool show_activity;
	/**
	 * Visibility of this connection
	 *
	 * See https://discord.com/developers/docs/resources/user#connection-object-visibility-types
	 */
	ConnectionVisibility visibility;
};
