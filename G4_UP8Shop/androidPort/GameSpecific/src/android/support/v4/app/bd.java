// Decompiled from classes.dex (SourceFile: bd.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.app.PendingIntent;
final class bd implements android.support.v4.app.bc {
    // Methods
    bd()
    {
      super();
    }

    public final android.app.PendingIntent a(
            android.content.Context p0,
            android.content.Intent[] p1,
            int p2,
            int p3,
            android.os.Bundle p4)
    {
      android.content.Intent v6;
      v6 = new android.content.Intent(p1[p1.length - 1]);
      v6.addFlags(0x10000000);
      return PendingIntent.getActivity(p0, p2, v6, p3);
    }

}
