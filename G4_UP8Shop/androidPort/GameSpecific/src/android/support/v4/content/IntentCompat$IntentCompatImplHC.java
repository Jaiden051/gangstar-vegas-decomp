// Decompiled from classes.dex (SourceFile: IntentCompat$IntentCompatImplHC.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class IntentCompat$IntentCompatImplHC extends android.support.v4.content.IntentCompat$IntentCompatImplBase {
    // Methods
    IntentCompat$IntentCompatImplHC()
    {
      super();
    }

    public android.content.Intent makeMainActivity(android.content.ComponentName p0)
    {
      return IntentCompatHoneycomb.makeMainActivity(p0);
    }

    public android.content.Intent makeRestartActivityTask(android.content.ComponentName p0)
    {
      return IntentCompatHoneycomb.makeRestartActivityTask(p0);
    }

}
