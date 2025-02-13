#pragma once

#include <iostream>
#include <optional>
#include <string>

namespace scarlet {
namespace token {
enum class TOKEN {
  IDENTIFIER,
  CONSTANT,
  INT,
  VOID,
  RETURN,
  OPEN_PARANTHESES,
  CLOSE_PARANTHESES,
  OPEN_BRACE,
  CLOSE_BRACE,
  SEMICOLON,
  TILDE,
  HYPHEN,
  PLUS,
  ASTERISK,
  FORWARD_SLASH,
  PERCENT_SIGN,
  DECREMENT_OPERATOR,
  UNKNOWN
};

class Token {
private:
  TOKEN token;
  std::optional<std::string> value;

public:
  Token(TOKEN token, std::optional<std::string> value)
      : token(token), value(value) {}
  Token(TOKEN token) : token(token) {}

  TOKEN get_token() { return token; }

  std::optional<std::string> get_value() { return value; }
};

void print_token(TOKEN token);
std::string to_string(TOKEN token);
} // namespace token
} // namespace scarlet
