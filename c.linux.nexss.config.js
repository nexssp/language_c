let languageConfig = Object.assign({}, require("./c.win32.nexss.config"));

languageConfig.builders = {
  gcc: {
    install: "apt install -y gcc",
    //build: "pkg --output <destinationFile> --out-path <destinationPath> <file>",
    command: "gcc",
    build: function () {
      return "gcc";
    },
    args: `-std=c17 -o <destinationFile> <file> && <destinationFile>`,
    help: ``,
  },
  llvm: {
    install: "apt-get install -y llvm",
    //build: "pkg --output <destinationFile> --out-path <destinationPath> <file>",
    command: "clang",
    build: function () {
      // Later to add vcpkg if needed.. see c++
      // let triplet = "x64-windows";
      // if (process.arch !== "x64") {
      //   triplet = "x86-windows";
      // }
      // process.env.VCPKG_DEFAULT_TRIPLET = triplet;
      return "clang";
    },
    args: `-std=c89 -o <destinationFile> <file>`,
    help: ``,
  },
};

module.exports = languageConfig;
