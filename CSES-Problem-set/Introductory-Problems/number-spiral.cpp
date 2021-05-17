#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

#define DEBUG(x) do { std::cerr << #x << ": " << x << std::endl; } while (0)
std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());

constexpr int MAXN = 1e9 + 7;
constexpr int INF = 0x3f3f3f3f;
constexpr long long INFLL = 0x3f3f3f3f3f3f3f3f;

int main (){
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--){
    long long row, col, emax, emin, ans;
    cin >> row >> col;
    emax = max(row, col);
    emin = min(row, col);
    if (emax % 2){
      emax *= emax;
      if (row <= col){
        ans = (emax - row + 1);
      }
      else {
        long long neval = max(row, col) - 1;
        neval *= neval;
        ans = neval + col;
      }
      cout << ans << "\n";
    }
    else {
      emax *= emax;
      if (row <= col){
        long long neval = max(row, col) - 1;
        neval *= neval;
        ans = neval + row;
      }
      else {
        ans = (emax - col + 1);
      }
      cout << ans << "\n";
    }
  }
}