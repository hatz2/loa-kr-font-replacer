# loa-kr-font-replacer
This is a very simple program, all it does is to replace the current Lost Ark font with the Korean LOA font and launchs the game. Thanks to this you don't have to manually replace the font files everytime there is an update to the game.

## How to use
The program expects two arguments, the original font path and the KR font path. The easiest way to set this up is to follow this instructions:

1. Create a direct link of `loa-kr-font-replacer.exe`.
2. Right click the direct link > Properties
3. In the `destiny` field add both paths as arguments.

It should look something like this:

```
C:\Users\hatz\Documents\Dev\loa-kr-font-replacer\x64\Release\loa-kr-font-replacer.exe "C:\\Program Files (x86)\\Steam\\steamapps\\common\\Lost Ark\\EFGame\\font.lpk" "C:\\Program Files (x86)\\Steam\\steamapps\\common\\Lost Ark\\Binaries\\Win64\\kr_font.lpk"
```

Once it is set up remember to always launch the game using this direct link.
