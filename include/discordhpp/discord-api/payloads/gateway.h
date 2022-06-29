#pragma once

#include <string>

#include "channel.h"
#include "emoji.h"
#include "user.h"
#include "../globals.h"

struct APIGatewayInfo
{
	/**
	 * The WSS URL that can be used for connecting to the gateway
	 */
	std::string url;
};

struct APIGatewaySessionStartLimit
{
	/**
	 * The total number of session starts the current user is allowed
	 */
	unsigned int total;
	/**
	 * The remaining number of session starts the current user is allowed
	 */
	unsigned int remaining;
	/**
	 * The number of milliseconds after which the limit resets
	 */
	unsigned int reset_after;
	/**
	 * The number of identify requests allowed per 5 seconds
	 */
	unsigned int max_concurrency;
};

struct APIGatewayBotInfo : APIGatewayInfo
{
	/**
	 * The recommended number of shards to use when connecting
	 *
	 * See https://discord.com/developers/docs/topics/gateway#sharding
	 */
	unsigned int shards;
	/**
	 * Information on the current session start limit
	 *
	 * See https://discord.com/developers/docs/topics/gateway#session-start-limit-object
	 */
	APIGatewaySessionStartLimit session_start_limit;
};