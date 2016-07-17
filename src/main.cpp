#include <iostream>
#include <string>
#include "json11.hpp"


using namespace std;
using namespace json11;
int main(int argc, char const *argv[]) {
  Json my_json = Json::object {
    { "key1", "value1" },
    { "key2", false },
    { "key3", Json::array { 1, 2, 3 } },
  };
  string json_str = my_json.dump();
  cout << json_str << endl;
  return 0;
}
