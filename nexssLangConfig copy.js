module.exports = {
  description: "C",
  type: "language",
  author: "Marcin Polak <mapoart@gmail.com>",
  version: "1.0",
  compiler: "gcc",
  extension: ".c",
  executeCommandLine: "",
  InteractiveShell: "",
  errors: {
    "Uncaught Error: Class '(.*?)'": {
      win32: "vcpkg install <package>",
      darwin: "nexss install cpp <package>",
      linux: "nexss install cpp <package>"
    }
  },
  url: ""
};
