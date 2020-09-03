let languageConfig = Object.assign({}, require("./c.win32.nexss.config"));

languageConfig.builders = {
  gcc: {
    install: "brew install gcc",
    command: "gcc",
    build: "gcc",
    args: `-std=c17 -o <destinationFile> <file> && <destinationFile>`,
    help: ``,
  },
  llvm: {
    install: "brew install llvm",
    command: "clang",
    build: "clang",
    args: `-std=c89 -o <destinationFile> <file>`,
    help: ``,
  },
};

module.exports = languageConfig;
