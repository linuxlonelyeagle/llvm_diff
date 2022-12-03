// ./clang -emit-llvm -S  mvin.c --target=riscv64-unknown-elf -march="rv64gxbuddy0p1" -menable-experimental-extensions
// ./llc -mtriple=riscv64 mvin.ll -verify-machineinstrs -mattr=+mvin
// ./llvm-mc -mattr=+mvin  -triple=riscv64 -show-encoding mvin.s

int main() {
  __builtin_riscv_mvin(1000,10000);
  return 0;
}

