# Xcode-IOKit-Driver-Template

## What' s  this?

This is a template for developers who wanna write IOKit Driver with Xcode in macOS/Hackintosh.

Since Xcode has provided the IOKit Driver template, it's still trivial to write IOKit Driver because the template has no necessary code for IOKit Driver. It' s just show like this:

```
/* add your code here */
...
```

It' s useless. As we all known, some code such as class definations, `OSDeclareDefaultStructors`  , `OSDefineMetaClassAndStructors` definations,  ` start` and `stop` functions are necessary for an IOKit Driver.

So, Watson, you've found your blind spot lol.

## What it can do?

As I mentioned, This is a template. It will complete the base codes for an IOKit Driver automatically  when you' re creating a new IOKit Driver project. In addition, it will add some `headerdoc-style`  comments in these codes so that you can generate your own documents with `headerdoc2html` easily.

Tested in Xcode 9.3 and it worked perfectly.

## How can I use it?

Just download and drag it into `/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/Project Templates/Mac/Other/ ` to replace `IOKit Driver.xctemplate`, then restart your Xcode app and enjoy it!

## License

This template is using MIT license.

## Acknowledgement

[@kattrali](https://github.com/kattrali) for [Xcode-Plugin-Template](https://github.com/kattrali/Xcode-Plugin-Template)

