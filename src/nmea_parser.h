#pragma once
#include <string>
#include <optional>

struct GGAData {
    std::string time_utc;
    double latitude{};
    char lat_dir{};
    double longitude{};
    char lon_dir{};
    int fix_quality{};
    int satellites{};
    double altitude{};
};

class NMEAParser {
public:
    static std::optional<GGAData> parseGGA(const std::string& sentence);
};
