// Decompiled from classes.dex (SourceFile: bf.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class bf implements android.support.v4.app.bc {
    // Methods
    bf()
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
      return TaskStackBuilderJellybean.getActivitiesPendingIntent(p0, p2, p1, p3, p4);
    }

}
