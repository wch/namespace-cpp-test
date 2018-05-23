#include <Rcpp.h>
#include <string>
#include <stdio.h>

namespace mynamespace {

class myclass {
public:
  std::string message() const {
    return "This is a message from pkgB.";
  }
};

inline myclass const &get_myclass() {
    static myclass instance;
    // fprintf(stderr, "%p\n", &instance);
    return instance;
}

}

//' @export
// [[Rcpp::export]]
std::string getmessage() {
  return mynamespace::get_myclass().message();
}
