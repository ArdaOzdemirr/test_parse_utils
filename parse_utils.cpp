#include <optional>
#include <string>

class ParseUtils {
public:
    static std::optional<int> parse_int(const std::string& str) {
        try {
            size_t pos;
            int value = std::stoi(str, &pos);
            if (pos != str.size()) {
                return std::nullopt;
            }
            return value;
        } catch (...) {
            return std::nullopt;
        }
    }
};
