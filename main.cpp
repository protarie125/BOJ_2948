#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vs = vector<string>;

const vs kDayNames{"Monday", "Tuesday",  "Wednesday", "Thursday",
                   "Friday", "Saturday", "Sunday"};

ll d, m;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> d >> m;
  ll ans = 3;

  while (m >= 1) {
    while (d > 1) {
      --d;
      ++ans;
    }

    if (m > 1) {
      --m;
      if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||
          m == 12) {
        d = 31;
        ++ans;
      } else if (m == 2) {
        d = 28;
        ++ans;
      } else {
        d = 30;
        ++ans;
      }
    } else {
      break;
    }
  }

  cout << kDayNames[ans % 7];

  return 0;
}