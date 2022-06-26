/**
 * Discord.hpp - A fast and lightweight Discord API library, written in C++
 * Copyright 2022 (c) - the Discord.hpp contributors
 */
#pragma once

 /**
  * https://discord.com/developers/docs/topics/opcodes-and-status-codes
  */

enum GatewayCloseCodes {
	UnknownError = 4000,
	UnknownOpcode = 4001,
	DecodeError = 4002,
	NotAuthenticated = 4003,
	AuthenticationFailed = 4004,
	AlreadyAuthenticated = 4005,
	InvalidSeq = 4007,
	RateLimited = 4008,
	SessionTimedOut = 4009,
	InvalidShard = 4010,
	ShardingRequired = 4011,
	InvalidApiVersion = 4012,
	InvalidIntents = 4013,
	DisallowedIntents = 4014
};

enum VoiceCloseCodes {
	UnknownOpcode = 4001,
	FailedToDecodePayload = 4002,
	NotAuthenticated = 4003,
	AuthenticationFailed = 4004,
	AlreadyAuthenticated = 4005,
	SessionNoLongerValid = 4006,
	SessionTimeout = 4009,
	ServerNotFound = 4011,
	UnknownProtocol = 4012,
	Disconnected = 4014,
	VoiceServerCrashed = 4015,
	UnknownEncryptionMode = 4016
};
