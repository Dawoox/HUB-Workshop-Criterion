{ pkgs ? import <nixpkgs> {} }:
  pkgs.mkShell {
    packages = with pkgs; [
      gcc
      gcovr
      gnumake
      criterion
    ];
}
