#pragma once

#include <optional>
#include <string>

class GatewayURLQuery
{
public:
    std::string v;
    std::string encoding = "json" | "etf";
    std::optional<std::string> compress = "zlib-stream";
};
