// Decompiled from classes.dex (SourceFile: be.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class be implements android.support.v4.app.bc {
    // Methods
    be()
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
      p1[0] = new android.content.Intent(p1[0]).addFlags(268484608);
      return TaskStackBuilderHoneycomb.getActivitiesPendingIntent(p0, p2, p1, p3);
    }

}
