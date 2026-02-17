#include <iostream>
#include <expected>
#include <string>
#include <charconv>

// Define our specific failure domain
enum class MathError {
    InvalidInput,
    DivisionByZero
};

// Helper to stringify errors (Haskell: Show instance)
std::string error_msg(MathError e) {
    switch(e) {
        case MathError::InvalidInput: return "Input was not a number";
        case MathError::DivisionByZero: return "Cannot divide by zero";
    }
    return "Unknown";
}

// Step 1: Parse (Returns Either<MathError, int>)
std::expected<int, MathError> parse(std::string_view s) {
    int val;
    auto [ptr, ec] = std::from_chars(s.data(), s.data() + s.size(), val);
    if (ec == std::errc()) return val;         // Haskell: Right val
    return std::unexpected(MathError::InvalidInput); // Haskell: Left InvalidInput
}

// Step 2: Divide (Returns Either<MathError, int>)
std::expected<int, MathError> divide(int a, int b) {
    if (b == 0) return std::unexpected(MathError::DivisionByZero); // Haskell: Left DivisionByZero
    return a / b;                                                  // Haskell: Right (a/b)
}

int main() {
    std::string s_num, s_denom;
    
    std::cout << "Enter numerator: ";
    std::cin >> s_num;
    std::cout << "Enter denominator: ";
    std::cin >> s_denom;

    auto result = parse(s_num)
        .and_then([&](int n) {
            return parse(s_denom).and_then([&](int d) {
                return divide(n, d);
            });
        });

    // Output handling matches on Success vs Failure
    if (result.has_value()) {
        std::cout << "Result: " << *result << "\n";
    } else {
        // We know EXACTLY what went wrong.
        std::cout << "Error: " << error_msg(result.error()) << "\n";
    }
}