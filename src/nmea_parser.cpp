#include "nmea_parser.h"
#include <sstream>
#include <vector>

std::optional<GGAData> NMEAParser::parseGGA(const std::string& sentence) {
    // Implementation comes tomorrow
    (void)sentence;
    return std::nullopt;
}
