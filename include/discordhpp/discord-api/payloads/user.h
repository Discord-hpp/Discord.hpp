#pragma once

#include <cmath>

/**
 * https://discord.com/developers/docs/resources/user#user-object-user-flags
 */
enum UserFlags // Maybe it's struct
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
	 * User is a [team](https://discord.com/developers/docs/topics/teams)
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
	 * Bot uses only [HTTP interactions](https://discord.com/developers/docs/interactions/receiving-and-responding#receiving-an-interaction) and is shown in the online member list
	 */
	BotHTTPInteractions = 1 << 19,
	/**
	 * User has been identified as spammer
	 *
	 * @unstable This user flag is currently not documented by Discord but has a known value which we will try to keep up to date.
	 */
	Spammer = 1 << 20,
	/**
	 * User's account has been quarantined based on recent activity
	 *
	 * @unstable This user flag is currently not documented by Discord but has a known value which we will try to keep up to date.
	 */
	// Quarantined = std::pow(2, 44),
};