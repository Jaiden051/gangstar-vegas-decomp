// Decompiled from classes.dex (SourceFile: IntentCompatHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.content.Intent;
class IntentCompatHoneycomb {
    // Methods
    IntentCompatHoneycomb()
    {
      super();
    }

    public static android.content.Intent makeMainActivity(android.content.ComponentName p0)
    {
      return Intent.makeMainActivity(p0);
    }

    public static android.content.Intent makeRestartActivityTask(android.content.ComponentName p0)
    {
      return Intent.makeRestartActivityTask(p0);
    }

}
