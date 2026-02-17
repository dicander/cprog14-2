#include <iostream>
#include <optional>
#include <string>
#include <charconv>

// Step 1: Parse input (Might fail if string is garbage)
std::optional<int> parse(std::string_view s) {
    int val;
    auto [ptr, ec] = std::from_chars(s.data(), s.data() + s.size(), val);
    if (ec == std::errc()) return val; // Haskell: Just val
    return std::nullopt;               // Haskell: Nothing
}

// Step 2: Perform Division (Might fail if b is 0)
std::optional<int> divide(int a, int b) {
    if (b == 0) return std::nullopt;   // Haskell: Nothing
    return a / b;                      // Haskell: Just (a/b)
}

int main() {
    std::string s_num, s_denom;
    
    std::cout << "Enter numerator: ";
    std::cin >> s_num;
    std::cout << "Enter denominator: ";
    std::cin >> s_denom;

    // The Monadic Chain
    auto result = parse(s_num)
        .and_then([&](int n) { 
            // We need to nest the second parse here or use a helper struct
            // For simplicity, let's assume we parse the denominator inside:
            return parse(s_denom).and_then([&](int d) {
                return divide(n, d); 
            });
        });

    // Output
    if (result) {
        std::cout << "Result: " << *result << "\n";
    } else {
        // We have NO IDEA if it was a parse error or a division error.
        std::cout << "Something went wrong.\n"; 
    }
}