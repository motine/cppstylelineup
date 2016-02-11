# C++ Style Guide Lineup

This is a comparison of the following coding styles:

- [LLVM](http://llvm.org/docs/CodingStandards.html)
- [Google](http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml)
- [Chromium](http://www.chromium.org/developers/coding-style)
- [Mozilla](https://developer.mozilla.org/en-US/docs/Developer_Guide/Coding_Style) an
- [WebKit](http://www.webkit.org/coding/coding-style.html)

Why those five? Because [clang-format](http://clang.llvm.org/docs/ClangFormat.html) supports them as base styles.

**This comparison only looks at formatting issues.**

## Compile and format

```bash
g++ llvm.cpp -o llvm
clang-format -i --style=LLVM llvm.cpp # style keys: LLVM, Google, Chromium, Mozilla, WebKit
```

## Contribute

Please write me if you find a mistake (contact via my [profile](https://github.com/motine/)).