{ pkgs }: {
	deps = [
		pkgs.timetrap
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}