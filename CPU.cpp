#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <libproc.h>
#include <mach/mach.h>
#include <map>
#include <string>
#include <sys/sysctl.h>
#include <unistd.h>
#include <vector>

using namespace std;

struct ProcSample {
  string name;
  uint64_t cpuTicks = 0;
};

static int getCoreCount() {
  int cores = 1;
  size_t len = sizeof(cores);
  sysctlbyname("hw.ncpu", &cores, &len, nullptr, 0);
  return cores;
}

static vector<pid_t> listPids() {
  int size = proc_listpids(PROC_ALL_PIDS, 0, nullptr, 0);
}
