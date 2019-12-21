#include <cstddef>
#include <string>
#include <optional>

namespace tables {

class Format {
public:
  Format& width(size_t value) {
    width_ = value;
    return *this;
  }

  Format& height(size_t value) {
    height_ = value;
    return *this;
  }

  Format& margin_left(size_t value) {
    margin_left_ = value;
    return *this;
  }

  Format& margin_right(size_t value) {
    margin_right_ = value;
    return *this;
  }

  Format& margin_top(size_t value) {
    margin_top_ = value;
    return *this;
  }

  Format& margin_bottom(size_t value) {
    margin_bottom_ = value;
    return *this;
  }

  Format& padding_left(size_t value) {
    padding_left_ = value;
    return *this;
  }

  Format& padding_right(size_t value) {
    padding_right_ = value;
    return *this;
  }

  Format& padding_top(size_t value) {
    padding_top_ = value;
    return *this;
  }

  Format& padding_bottom(size_t value) {
    padding_bottom_ = value;
    return *this;
  }

  Format& border_left(std::string value) {
    border_left_ = value;
    return *this;
  }

  Format& border_right(std::string value) {
    border_right_ = value;
    return *this;
  }

  Format& border_top(std::string value) {
    border_top_ = value;
    return *this;
  }

  Format& border_bottom(std::string value) {
    border_bottom_ = value;
    return *this;
  }

  Format& corners(std::string value) {
    corners_ = value;
    return *this;
  }

  Format& column_separator(std::string value) {
    column_separator_ = value;
    return *this;
  }  
  
private:
  friend class Cell;
  friend class Row;
  friend class Table;
  std::optional<size_t> width_{};
  std::optional<size_t> height_{};
  
  size_t margin_left_{1};
  size_t margin_top_{1};
  size_t margin_right_{1};
  size_t margin_bottom_{1}; 
  
  size_t padding_left_{1};
  size_t padding_top_{1};
  size_t padding_right_{1};
  size_t padding_bottom_{1};

  std::string border_top_{"-"};
  std::string border_bottom_{"-"};
  std::string border_left_{"|"};
  std::string border_right_{"|"};  

  std::string corners_{"+"};
  std::string column_separator_{"|"};
};
  
};
