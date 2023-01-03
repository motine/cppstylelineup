# C++ Style Guide Lineup

This is a comparison of the following coding styles:

- [LLVM](http://llvm.org/docs/CodingStandards.html)
- [Google](https://google.github.io/styleguide/cppguide.html)
- [Chromium](http://www.chromium.org/developers/coding-style)
- [Mozilla](https://firefox-source-docs.mozilla.org/code-quality/coding-style/coding_style_cpp.html)
- [WebKit](https://webkit.org/code-style-guidelines/)
- [Microsoft](https://docs.microsoft.com/en-us/visualstudio/ide/editorconfig-code-style-settings-reference?view=vs-2019)
- [GNU](https://www.gnu.org/prep/standards/standards.html)

Why those seven? Because [clang-format](http://clang.llvm.org/docs/ClangFormat.html) supports them as base styles.

**This comparison only looks at formatting issues.**

## Compile and format

```bash
g++ llvm.cpp -o llvm
clang-format -i --style=LLVM llvm.cpp # style keys: LLVM, Google, Chromium, Mozilla, WebKit
```

## Contribute

Please write me if you find a mistake (contact via my [profile](https://github.com/motine/)).
