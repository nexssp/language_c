let languageConfig = Object.assign({}, require("../config.win32"));
languageConfig.title = "C";
languageConfig.description =
  "C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, while a static type system prevents unintended operations. ";
languageConfig.url = "https://clang.llvm.org";
languageConfig.extensions = [".c"];
languageConfig.builders = {};
languageConfig.compilers = {
  gcc: {
    install: "scoop install msys2",
    command: "gcc",
    args: "-o <file>.exe <file> && <file>.exe",
    help: ``
  }
};
languageConfig.errors = require("./nexss.c.errors");
languageConfig.languagePackageManagers = {
  npm: {
    installation: "PowerShell.exe -File installVCPKG.bat",
    messageAfterInstallation: "", //this message will be displayed after this package manager installation, maybe some action needed etc.
    installed: "vcpkg list <args>",
    search: "vcpkg search <args>",
    install: "vcpkg install <args>",
    uninstall: "vcpkg remove <args>",
    help: "vcpkg <args>",
    version: "vcpkg version",
    init: () => {
      const { debug } = require("../../lib/log");
      const d = debug("nexss:config.base");
      require("child_process").execSync("vcpkg integrate project");
      d("initialized vcpkg project.");
    },
    // if command not found in specification
    // run directly on package manager
    else: "vcpkg <default> <args>"
  }
};

module.exports = languageConfig;
