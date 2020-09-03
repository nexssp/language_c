let languageConfig = Object.assign({}, require("./c.win32.nexss.config"));

languageConfig.builders = {
  gcc: {
    install: "apt install -y gcc",
    //build: "pkg --output <destinationFile> --out-path <destinationPath> <file>",
    command: "gcc",
    build: "gcc",
    args: `-std=c11 -o <destinationFile> <file> && <destinationFile>`,
    help: ``,
  },
  llvm: {
    install: "apt-get install -y llvm",
    //build: "pkg --output <destinationFile> --out-path <destinationPath> <file>",
    command: "clang",
    build: "clang",
    args: `-std=c89 -o <destinationFile> <file>`,
    help: ``,
  },
};

module.exports = languageConfig;
