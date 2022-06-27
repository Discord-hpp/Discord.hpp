#pragma once

#define GatewayVersion 10;

/**
 * https://discord.com/developers/docs/topics/opcodes-and-status-codes#gateway-gateway-opcodes
 */
enum GatewayOpcodes 
{
	/**
	 * An event was dispatched
	 */
	Dispatch,
	/**
	 * A bidirectional opcode to maintain an active gateway connection.
	 * Fired periodically by the client, or fired by the gateway to request an immediate heartbeat from the client.
	 */
	Heartbeat,
	/**
	 * Starts a new session during the initial handshake
	 */
	Identify,
	/**
	 * Update the client's presence
	 */
	PresenceUpdate,
	/**
	 * Used to join/leave or move between voice channels
	 */
	VoiceStateUpdate,
	/**
	 * Resume a previous session that was disconnected
	 */
	Resume = 6,
	/**
	 * You should attempt to reconnect and resume immediately
	 */
	Reconnect,
	/**
	 * Request information about offline guild members in a large guild
	 */
	RequestGuildMembers,
	/**
	 * The session has been invalidated. You should reconnect and identify/resume accordingly
	 */
	InvalidSession,
	/**
	 * Sent immediately after connecting, contains the `heartbeat_interval` to use
	 */
	Hello,
	/**
	 * Sent in response to receiving a heartbeat to acknowledge that it has been received
	 */
	HeartbeatAck,
};

/**
 * https://discord.com/developers/docs/topics/opcodes-and-status-codes#gateway-gateway-close-event-codes
 */
enum GatewayCloseCodes 
{
	/**
	 * We're not sure what went wrong. Try reconnecting?
	 */
	UnknownError = 4000,
	/**
	 * You sent an invalid Gateway opcode or an invalid payload for an opcode. Don't do that!
	 *
	 * See https://discord.com/developers/docs/topics/gateway#payloads-and-opcodes
	 */
	UnknownOpcode,
	/**
	 * You sent an invalid payload to us. Don't do that!
	 *
	 * See https://discord.com/developers/docs/topics/gateway#sending-payloads
	 */
	DecodeError,
	/**
	 * You sent us a payload prior to identifying
	 *
	 * See https://discord.com/developers/docs/topics/gateway#identify
	 */
	NotAuthenticated,
	/**
	 * The account token sent with your identify payload is incorrect
	 *
	 * See https://discord.com/developers/docs/topics/gateway#identify
	 */
	AuthenticationFailed,
	/**
	 * You sent more than one identify payload. Don't do that!
	 */
	AlreadyAuthenticated,
	/**
	 * The sequence sent when resuming the session was invalid. Reconnect and start a new session
	 *
	 * See https://discord.com/developers/docs/topics/gateway#resume
	 */
	InvalidSeq = 4007,
	/**
	 * Woah nelly! You're sending payloads to us too quickly. Slow it down! You will be disconnected on receiving this
	 */
	RateLimited,
	/**
	 * Your session timed out. Reconnect and start a new one
	 */
	SessionTimedOut,
	/**
	 * You sent us an invalid shard when identifying
	 *
	 * See https://discord.com/developers/docs/topics/gateway#sharding
	 */
	InvalidShard,
	/**
	 * The session would have handled too many guilds - you are required to shard your connection in order to connect
	 *
	 * See https://discord.com/developers/docs/topics/gateway#sharding
	 */
	ShardingRequired,
	/**
	 * You sent an invalid version for the gateway
	 */
	InvalidAPIVersion,
	/**
	 * You sent an invalid intent for a Gateway Intent. You may have incorrectly calculated the bitwise value
	 *
	 * See https://discord.com/developers/docs/topics/gateway#gateway-intents
	 */
	InvalidIntents,
	/**
	 * You sent a disallowed intent for a Gateway Intent. You may have tried to specify an intent that you have not
	 * enabled or are not whitelisted for
	 *
	 * See https://discord.com/developers/docs/topics/gateway#gateway-intents
	 *
	 * See https://discord.com/developers/docs/topics/gateway#privileged-intents
	 */
	DisallowedIntents,
};

/**
 * https://discord.com/developers/docs/topics/gateway#list-of-intents
 */
enum GatewayIntentBits
{
	Guilds = 1 << 0,
	GuildMembers = 1 << 1,
	GuildBans = 1 << 2,
	GuildEmojisAndStickers = 1 << 3,
	GuildIntegrations = 1 << 4,
	GuildWebhooks = 1 << 5,
	GuildInvites = 1 << 6,
	GuildVoiceStates = 1 << 7,
	GuildPresences = 1 << 8,
	GuildMessages = 1 << 9,
	GuildMessageReactions = 1 << 10,
	GuildMessageTyping = 1 << 11,
	DirectMessages = 1 << 12,
	DirectMessageReactions = 1 << 13,
	DirectMessageTyping = 1 << 14,
	MessageContent = 1 << 15,
	GuildScheduledEvents = 1 << 16,
};

/**
 * https://discord.com/developers/docs/topics/gateway#commands-and-events-gateway-events
 */
enum GatewayDispatchEvents // meta error
{
	ApplicationCommandPermissionsUpdate = "APPLICATION_COMMAND_PERMISSIONS_UPDATE",
	ChannelCreate = "CHANNEL_CREATE",
	ChannelDelete = "CHANNEL_DELETE",
	ChannelPinsUpdate = "CHANNEL_PINS_UPDATE",
	ChannelUpdate = "CHANNEL_UPDATE",
	GuildBanAdd = "GUILD_BAN_ADD",
	GuildBanRemove = "GUILD_BAN_REMOVE",
	GuildCreate = "GUILD_CREATE",
	GuildDelete = "GUILD_DELETE",
	GuildEmojisUpdate = "GUILD_EMOJIS_UPDATE",
	GuildIntegrationsUpdate = "GUILD_INTEGRATIONS_UPDATE",
	GuildMemberAdd = "GUILD_MEMBER_ADD",
	GuildMemberRemove = "GUILD_MEMBER_REMOVE",
	GuildMembersChunk = "GUILD_MEMBERS_CHUNK",
	GuildMemberUpdate = "GUILD_MEMBER_UPDATE",
	GuildRoleCreate = "GUILD_ROLE_CREATE",
	GuildRoleDelete = "GUILD_ROLE_DELETE",
	GuildRoleUpdate = "GUILD_ROLE_UPDATE",
	GuildStickersUpdate = "GUILD_STICKERS_UPDATE",
	GuildUpdate = "GUILD_UPDATE",
	IntegrationCreate = "INTEGRATION_CREATE",
	IntegrationDelete = "INTEGRATION_DELETE",
	IntegrationUpdate = "INTEGRATION_UPDATE",
	InteractionCreate = "INTERACTION_CREATE",
	InviteCreate = "INVITE_CREATE",
	InviteDelete = "INVITE_DELETE",
	MessageCreate = "MESSAGE_CREATE",
	MessageDelete = "MESSAGE_DELETE",
	MessageDeleteBulk = "MESSAGE_DELETE_BULK",
	MessageReactionAdd = "MESSAGE_REACTION_ADD",
	MessageReactionRemove = "MESSAGE_REACTION_REMOVE",
	MessageReactionRemoveAll = "MESSAGE_REACTION_REMOVE_ALL",
	MessageReactionRemoveEmoji = "MESSAGE_REACTION_REMOVE_EMOJI",
	MessageUpdate = "MESSAGE_UPDATE",
	PresenceUpdate = "PRESENCE_UPDATE",
	StageInstanceCreate = "STAGE_INSTANCE_CREATE",
	StageInstanceDelete = "STAGE_INSTANCE_DELETE",
	StageInstanceUpdate = "STAGE_INSTANCE_UPDATE",
	Ready = "READY",
	Resumed = "RESUMED",
	ThreadCreate = "THREAD_CREATE",
	ThreadDelete = "THREAD_DELETE",
	ThreadListSync = "THREAD_LIST_SYNC",
	ThreadMembersUpdate = "THREAD_MEMBERS_UPDATE",
	ThreadMemberUpdate = "THREAD_MEMBER_UPDATE",
	ThreadUpdate = "THREAD_UPDATE",
	TypingStart = "TYPING_START",
	UserUpdate = "USER_UPDATE",
	VoiceServerUpdate = "VOICE_SERVER_UPDATE",
	VoiceStateUpdate = "VOICE_STATE_UPDATE",
	WebhooksUpdate = "WEBHOOKS_UPDATE",
	GuildScheduledEventCreate = "GUILD_SCHEDULED_EVENT_CREATE",
	GuildScheduledEventUpdate = "GUILD_SCHEDULED_EVENT_UPDATE",
	GuildScheduledEventDelete = "GUILD_SCHEDULED_EVENT_DELETE",
	GuildScheduledEventUserAdd = "GUILD_SCHEDULED_EVENT_USER_ADD",
	GuildScheduledEventUserRemove = "GUILD_SCHEDULED_EVENT_USER_REMOVE",
};