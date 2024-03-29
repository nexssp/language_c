let languageConfig = Object.assign(
  {},
  require(`../config.${process.platform}`)
);
languageConfig.title = "C";
languageConfig.description =
  "C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, while a static type system prevents unintended operations. ";
languageConfig.url = "https://clang.llvm.org";
languageConfig.extensions = [".c"];
languageConfig.founders = ["Dennis Ritchie"];
languageConfig.developers = ["Brian Kernighan", "Dennis Ritchie"];
languageConfig.years = ["1972"];
languageConfig.builders = {
  gcc: {
    install:
      "scoop bucket add dorado https://github.com/chawyehsu/dorado && scoop install dorado/nuwen-mingw-gcc && echo \033[1;31mNOTE: If you see errors you may want to restart terminal.\033[0m",
    //build: "pkg --output <destinationFile> --out-path <destinationPath> <file>",
    command: "gcc",
    build: function () {
      return "gcc";
    },
    args: `-std=c17 -o <destinationFile> <file> && <destinationFile>`,
    help: ``,
  },
  llvm: {
    install: "scoop install llvm",
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
languageConfig.compilers = {
  // gcc: {
  //   install: "scoop install msys2",
  //   command: "gcc",
  //   args: "-o <file>.exe <file> && <file>.exe",
  //   help: ``
  // }
};
languageConfig.errors = require("./nexss.c.errors");
languageConfig.languagePackageManagers = {
  vcpkg: {
    installation: `PowerShell.exe -File ${__dirname}/install/installVCPKG.bat`,
    messageAfterInstallation: "", //this message will be displayed after this package manager installation, maybe some action needed etc.
    installed: "vcpkg list",
    search: "vcpkg search",
    install: "vcpkg install",
    uninstall: "vcpkg remove",
    help: "vcpkg --help",
    version: "vcpkg version",
    init: () => {
      require("child_process").execSync("vcpkg integrate project");
      console.log("initialized vcpkg project.");
    },
    else: "vcpkg",
  },
};

module.exports = languageConfig;
