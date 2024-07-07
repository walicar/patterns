{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs";
    utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, utils }: utils.lib.eachDefaultSystem (system:
    let
      pkgs = import nixpkgs { inherit system; };
    in {
      devShells.default = pkgs.mkShell {
        packages = with pkgs; [
          # IDE
          neovim

          # Tooling
          clang-tools
          cmake
          gtest
          lcov
        ];

        shellHook = ''
        	export XDG_CONFIG_HOME=$(pwd)/fig
			export SRC=$(pwd)
			export PATH=$PATH:~/.local/bin
			mkdir -p build
			cd build
			cmake ..
			cd ..
			ln -s ./build/compile_commands.json ./
			nix-store --gc
        '';
      };
    }
  );
}
