#pragma once

#include "../globals.h"

enum WebhookType 
{
	/**
	 * Incoming Webhooks can post messages to channels with a generated token
	 */
	Incoming = 1,
	/**
	 * Channel Follower Webhooks are internal webhooks used with Channel Following to post new messages into channels
	 */
	ChannelFollower,
	/**
	 * Application webhooks are webhooks used with Interactions
	 */
	Application,
};
