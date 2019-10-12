const { ProgrammingLanguage } = require("../../lib/programmingLanguage");
const pl = new ProgrammingLanguage(".c");

pl.add("title", "c");
pl.add("description", `c`);
pl.add("packageManager", { all: "vcpkg require" });
pl.add("packageManagerInstallation", {
  win32: "PowerShell.exe -File installComposer.ps1",
  linux: "bash install/installComposer.sh",
  darwin: "bash install/installComposer.sh"
});

pl.add("compiler", "gcc");

pl.add("compilerArgs", ["-o", "<fileWithoutExtension>"]);
//pl.add("compilerArgsPost", ["&", "<fileWithoutExtension>"]);

// pl.add("postCompiler", " && <fileWithoutExtension>");

pl.add("packageManager", {
  all: "vcokg install <package>"
});
// pl.add("afterPackageInstallMessage", {
//   all:
//     "Add to the top of your php file(s): require __DIR__ . '/vendor/autoload.php';"
// });
pl.add("url", "https://php.net");
pl.addError("Uncaught Error: Class '(.*?)'", {
  win32: "nexss install c <package>",
  darwin: "nexss install c <package>",
  linux: "nexss install c <package>"
});

pl.addHelp("executeCommandLine", "php -r");
pl.addHelp("InteractiveShell", "php -a");

module.exports = pl.data;
