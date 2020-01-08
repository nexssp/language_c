let languageConfig = Object.assign({}, require("../config.win32"));
languageConfig.title = "C";
languageConfig.description =
  "C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, while a static type system prevents unintended operations. ";
languageConfig.url = "https://clang.llvm.org";
languageConfig.extensions = [".c"];

const vcpkgIncludePath = require("child_process")
  .execSync(`where vcpkg`)
  .toString()
  .trim();

const VCpkgPath = `${require("path").dirname(
  vcpkgIncludePath
)}/installed/x86-windows/include`;

languageConfig.builders = {
  llvm: {
    install: "scoop install llvm",
    //build: "pkg --output <destinationFile> --out-path <destinationPath> <file>",
    command: "clang",
    build: function() {
      return "clang";
    },
    // build: function() {
    //   const path = require("path");
    //   //take command from current folder
    //   return `${path.join(__dirname, "customCompiler.win32.c.cmd")}`;
    // },
    args: `-std=c17 -Xclang -flto-visibility-public-std -Wall -isystem ${VCpkgPath} -o <destinationFile> <file>`,
    help: ``
  }
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
    else: "vcpkg"
  }
};

module.exports = languageConfig;
